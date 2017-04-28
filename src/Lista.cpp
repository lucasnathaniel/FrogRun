/**
  *@file Lista.cpp
  *@brief Arquivo com a implementação da lista
  *
  */

#include "Lista.h"
#include "Sapos.h"
/**
  *@brief Construtor
  */
Lista::Lista(){
    first = NULL;
    this->quantity = 0;
}
/**
  *@brief Destrutor
  */
Lista::~Lista(){

}
/**
  *@brief retorna o primeiro elemento
  */
Sapos* Lista::getFirst(){
	return first;
}
/**
  *@brief insere um elemento no comeco da lista
  */
void Lista::insertBegin(string identidade){
    Sapos* novo = new Sapos(identidade);
    novo->setNext(first);
    first = novo;
    this->quantity++;
}
/**
  *@brief insere um elemento no final da lista
  */
void Lista::insertEnd(string identidade){
    
    if(first == NULL){
		insertBegin(identidade);
		return;
	}
    
    Sapos* novo = new Sapos(identidade);
    Sapos* percorre = first;
    
    while(percorre->getNext() != NULL){
    	percorre = percorre->getNext();
    }
    percorre->setNext(novo);
    this->quantity++;
}