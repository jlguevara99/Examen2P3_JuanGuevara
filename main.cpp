#include <string>
#include <iostream>
#include "Ciudadano.h"
#include "Estudiante.h"
#include "Maestro.h"
#include "Quirk.h"
#include "Emmitter.h"
#include "LinkedList.h"
#include "Transform.h"
#include "Mutant.h"
#include <typeinfo>
#include <fstream>


using namespace std;

int menu();

int main(){
	cout<<"<<<< Juan Guevara -- Examen2 >>>>"<<endl<<endl<<endl;

	LinkedList lista;


	bool salir = true;
	do {
		int opcion = menu();
		if(opcion == 1){//opcion 1
			string nom, fecha,colorP,colorO, likes, dislikes, sangre;
			int edad;
			double altura;
			cout<<"Ingrese el nombre: "<<endl;
			cin>>nom;
			cout<<"Ingrese la edad: "<<endl;
			cin>>edad;
			cout<<"Ingrese la fecha: "<<endl;
			cin>>fecha;
			cout<<"Ingrese altura: "<<endl;
			cin>>altura;
			cout<<"Color de pelo: "<<endl;
			cin>>colorP;
			cout<<"Color de ojos: "<<endl;
			cin>>colorO;
			cout<<"likes: "<<endl;
			cin>>likes;
			cout<<"dislikes: "<<endl;
			cin>>dislikes;
			cout<<"Tipo de sangre: "<<endl;
			cin>>sangre;

			cout<<"QUIRK: "<<endl<<"1. Emmitter"<<endl<<"2. Transformation"<<endl<<"3. Mutant"<<endl;
			int opquirk;
			cin>>opquirk;
			while(opquirk < 1 || opquirk > 3){
				cout<<"Incorrecto, ingrese de nuevo"<<endl;
				cin>>opquirk;
			}


			Quirk* quir;
			if(opquirk == 1){
				string descrip,effect;
				int cant;
				int op;
				bool activar;
				cout<<"Descripcion: "<<endl;
				cin>>descrip;
				cout<<"Cantidad: "<<endl;
				cin>>cant;
				cout<<"Efecto: "<<endl;
				cin>>effect;
				cout<<"Afecta a otros"<<endl<<"1. si"<<endl<<"2. no"<<endl;
				cin>>op;
				if(op == 1){
					activar = true;
				}
				quir = new Emmitter(descrip,effect,cant,activar);

			}else if(opquirk == 2){
			    string descrip,effect;
		 		int cant;
	 			int op;
				bool activar;
		 		cout<<"Descripcion: "<<endl;
				cin>>descrip;
		 		cout<<"Cantidad: "<<endl;
				cin>>cant;
				cout<<"Efecto: "<<endl;
				cin>>effect;
				cout<<"Afecta a otros"<<endl<<"1. si"<<endl<<"2. no"<<endl;
				cin>>op;
				if(op == 1){
					activar = true;
				}
				quir = new Transform(descrip, effect, cant, activar);
			}else{
				string descripcion;
				cin>>descripcion;
				quir = new Mutant(descripcion);
			}

			cout<<"sueldo: "<<endl;
			double sueldo;
			cin>>sueldo;


			Maestro* maestro = new Maestro(nom, fecha,edad, altura, colorP, colorO, likes, dislikes, sangre, quir, "clase 1","departamento","alias", sueldo);

			lista.insert(maestro);


		}else if(opcion == 2){//opcion 2
			int tam = lista.size();
			cout<<"Ingrese la posicion que desea eliminar: "<<endl;
			int pos;
			cin>>pos;
			while(pos<=0 || pos > tam){
				cout<<"Posicion incorrecta"<<endl;
				cin>>pos;
			}
			lista.remove(tam,pos);
			cout<<"Ciudadano eliminado"<<endl;
		}else if(opcion == 3){//opcion 3
			string nom, fecha,colorP,colorO, likes, dislikes, sangre;
			int edad;
		  	double altura;
		    cout<<"Ingrese el nombre: "<<endl;
			cin>>nom;
			cout<<"Ingrese la edad: "<<endl;
			cin>>edad;
			cout<<"Ingrese la fecha: "<<endl;
			cin>>fecha;
			cout<<"Ingrese altura: "<<endl;
			cin>>altura;
			cout<<"Color de pelo: "<<endl;
			cin>>colorP;
			cout<<"Color de ojos: "<<endl;
			cin>>colorO;
			cout<<"likes: "<<endl;
			cin>>likes;
			cout<<"dislikes: "<<endl;
			cin>>dislikes;
			cout<<"Tipo de sangre: "<<endl;
			cin>>sangre;
			cout<<"Promedio: "<<endl;
			double promedio;
			cin>>promedio;

			Quirk* qui = new Mutant("Im sorry");

			Estudiante* alumno = new Estudiante(nom,fecha,edad,altura,colorP, colorO,likes,dislikes,sangre,qui,promedio,"clase 1");

			lista.insert(alumno);

		}else if(opcion == 4){
			int tam = lista.size();
			cout<<"Ingrese la posicion que desea eliminar: "<<endl;
			int pos;
			cin>>pos;
			while(pos<=0 || pos > tam){
				cout<<"Poscion incorrecta, ingrese de nuevo"<<endl;

				cin>>pos;
			}

			lista.remove(tam, pos);
			cout<<"Ciudadano Eliminado"<<endl;
		}else if(opcion == 5){
			int tam = lista.size();
			for(int i = 1; i <= tam; i++) {
				/*if(typeid(*lista.get(tam,i))==typeid(Maestro)){
					cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
					
				}*/
				//cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
				if(lista.get(tam,i)->getBandera() == 1){
					cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
				}
				
			}
		}else if(opcion == 6){
			Ciudadano* temporal;
			int tam = lista.size();
			for(int i = 1; i <= tam ; i++) {
				 temporal = lista.get(tam,i);
				/*if(typeid(*lista.get(tam,i))==typeid(Estudiante)){
					
					cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
				}*/
				if(lista.get(tam,i)->getBandera() == 2){
				cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
				}
				
			}
		}else if(opcion == 7){
			int tam = lista.size();
			double acumulador = 0;
			for(int i = 1; i <= tam; i++) {
				if(lista.get(tam,i)->getBandera() == 1){
				acumulador += lista.get(tam,i)->getNumeros();
				}
			}
			double promedio;
			promedio = acumulador/tam;
			cout<<"El Sueldo es: "<<promedio<<endl;
		}else if(opcion == 8){
			int tam = lista.size();
			double acumulador = 0;
			for(int i = 1; i <= tam; i++) {
				if(lista.get(tam,i)->getBandera() == 2){
				acumulador += lista.get(tam,i)->getNumeros();
				}
			}
			double promedio;
			promedio = acumulador/tam;
			cout<<"El promedio es: "<<promedio<<endl;
		}else if(opcion == 9){
			int tam = lista.size();
			for(int i = 1; i <= tam; i++) {
				cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
			}
		}else if(opcion == 10){
			int tam = lista.size();
			ofstream archivo("registro.txt",ios::app);
			archivo<<"Nuevo: "<<"\n";
			for(int i = 1; i <= tam; i++) {
				archivo<<lista.get(tam,i)->toString()<<"\n";
			}
		}else if(opcion == 11){
			salir = false;
			cout<<"Gracias Ana :( "<<endl;
		}

	} while (salir);
	
	return 0;
}





//menu
int menu(){
	cout<<endl;
	cout<<"	MENU"<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"1. Contratar Maestro"<<endl;
	cout<<"2. Despedir Maestro"<<endl;
	cout<<"3. Matricular Alumno"<<endl;
	cout<<"4. Expulsar Alumno"<<endl;
	cout<<"5. Listar Maestros"<<endl;
	cout<<"6. Listar Alumnos"<<endl;
	cout<<"7. Sacar sueldo promedio de los maestro"<<endl;
	cout<<"8. Sacar promedio general de todos los alumnos"<<endl;
	cout<<"9. Listar alumnos por departamento"<<endl;
	cout<<"10. Guardar registros en txt"<<endl;
	cout<<"11. Salir"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	int opcion;
	cin>>opcion;

	return opcion;
}
