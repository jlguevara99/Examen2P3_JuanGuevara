#include "Ciudadano.h"

Ciudadano::Ciudadano(){
		
}

string Ciudadano::getNombre(){
	return nombre;
}

int Ciudadano::getEdad(){
	return edad;
}

string Ciudadano::toString(){
	return nombre+" - "+fecha+" - "+sangre; 
}

double Ciudadano::getNumeros(){
	return numeros;
}

int Ciudadano::getBandera(){
	return bandera;
}

