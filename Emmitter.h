#ifndef EMMITTER_H
#define EMMITTER_H

#include "Quirk.h"

class Emmitter : public Quirk{
	private:
		string efecto;
		int cantidad;
		bool activar;

	public:
		Emmitter(string, string, int, bool);
};


#endif
