/**
  *@file Sapos.h
  *@brief arquivo com as declaracoes das funcoes da classe Sapos
  */

#ifndef __SAPOS_H__
#define __SAPOS_H__

#include <string>
#include <iostream>

using namespace std;

class Sapos{
	private:
		string id;
		int percorreu;
		Sapos* next;

	public:
		Sapos(string ident);
		Sapos();
		~Sapos();
		string getId();
		void setId(string ident);
		int getPercorreu();
		void setPercorreu(int percorre);
		Sapos* getNext();
		void setNext(Sapos* Sapo);
};

void Interface();

#endif