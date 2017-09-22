#include "Maestro.h"

Maestro::Maestro(string nom,string fec,int ed,double al,string cp,string co,string lik,string dlik,string s,Quirk* quir, string cla, string dep, string ali, double suel){
	
	nombre = nom;
	fecha = fec;
	edad = ed;
	altura = al;
	colorP = cp;
	colorO = co;
	likes = lik;
	dislikes = dlik;
	sangre = s;
	quirk = quir;
	classrom = cla;
	departamento = dep;
	alias = ali;
	numeros = suel;

}

double Maestro::getSueldo(){
	return sueldo;
}
