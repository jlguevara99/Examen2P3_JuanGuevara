#ifndef MAESTRO_H
#define MAESTRO_H
#include "Ciudadano.h"

class Maestro : public Ciudadano{

	private:
		string classrom;
		string departamento;
		string alias;
		double sueldo;
	public:
		Maestro(string,string,int,double,string,string,string,string,string,Quirk*, string, string, string, double);


		double getSueldo();
};


#endif
