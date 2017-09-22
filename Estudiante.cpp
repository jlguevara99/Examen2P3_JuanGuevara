#include "Estudiante.h"

Estudiante::Estudiante(string pnam, string fec, int ed, double al, string co, string cp, string lik, string dlik,string san,Quirk* quir, double prom, string clas){

	nombre = pnam;
	fecha = fec;
	edad = ed;
	altura = al;
	colorP = co;
	colorO = cp;
	likes = lik;
	dislikes = dlik;
	sangre = san;
	quirk = quir;
	numeros = prom;
	classroom = clas;
	bandera = 2;

}

Estudiante::Estudiante(){

}

double Estudiante::getPromedio(){
	return promedio;
}
