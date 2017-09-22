#ifndef CIUDADANO_H
#define CIUDADANO_H
#include <iostream>
#include <string>
#include "Quirk.h"
using namespace std;
class Ciudadano{
	protected:
		string nombre;
		string fecha;
		int edad;
		double altura;
		string colorP;
		string colorO;
		string likes;
		string dislikes;
		string sangre;
		Quirk* quirk;
		double numeros;
	public:
		Ciudadano();
		double getNumeros();
		string getNombre();
		int getEdad();
		string toString();



};




#endif
