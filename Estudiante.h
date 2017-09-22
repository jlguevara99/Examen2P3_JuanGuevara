#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Ciudadano.h"

class Estudiante : public Ciudadano{
	private:
		double promedio;
		string classroom;
	public:
		Estudiante(string,string,int,double,string,string,string,string,string,Quirk*, double,string);
		Estudiante();

		double getPromedio();
};




#endif
