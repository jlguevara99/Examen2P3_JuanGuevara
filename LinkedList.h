#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Ciudadano.h"
#include "Quirk.h"
#include <vector>
using namespace std;

class LinkedList{
	struct Node {
		Ciudadano* objeto;
		Node *posicion;
	};

	public:
		LinkedList();
		void insert(Ciudadano*);
		int size();
		Ciudadano* get(int,int);
		void remove(int,int);
		//int sacar();
	private:
		Node *head;
};



#endif
