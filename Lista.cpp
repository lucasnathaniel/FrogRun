#include "Lista.h"
#include "Sapos.h"

Lista::Lista(){
    first = NULL;
    this->quantity = 0;
}

Lista::~Lista(){

}

Sapos* Lista::getFirst(){
	return first;
}

void Lista::insertBegin(string identidade){
    Sapos* novo = new Sapos(identidade);
    novo->setNext(first);
    first = novo;
    this->quantity++;
}

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