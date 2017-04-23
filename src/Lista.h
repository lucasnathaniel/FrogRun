#ifndef __LISTA_H__
#define __LISTA_H__

#include <iostream>
#include "Sapos.h"
#include <string>

using namespace std;

class Lista{
	private:
		int quantity;
		Sapos* first;
	public:
		Lista();
    	~Lista();
    	Sapos* getFirst();
    	void insertBegin(string identidade);
    	void insertEnd(string identidade);
};

#endif