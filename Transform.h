#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Quirk.h"

class Transform : public Quirk{
	private:
		string forma;
		int cantidad;
		bool afectar;
	public:
		Transform(string, string, int, bool);


};



#endif
