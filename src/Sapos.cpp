#include "Sapos.h"

Sapos::~Sapos(){

}

Sapos::Sapos(string ident){
	this->setId(ident);
	this->setPercorreu(0);
	this->setNext(NULL);
}
Sapos::Sapos(){
	this->setNext(NULL);
}

string Sapos::getId(){
	return id;
}
void Sapos::setId(string ident){
	this->id = ident;
}
int Sapos::getPercorreu(){
	return percorreu;
}
void Sapos::setPercorreu(int percorre){
	this->percorreu = percorre;
}
Sapos* Sapos::getNext(){
    return this->next;
}

void Sapos::setNext(Sapos* Sapo){
    this->next = Sapo;
}

void Interface(){
	cout << " ______                 _____                 " << endl;
	cout << "|  ____|               |  __ \\               " << endl;
	cout << "| |__ _ __ ___   __ _  | |__) |   _ _ __      " << endl;
	cout << "|  __| '__/ _ \\ / _` | |  _  / | | | '_ \\   " << endl;
	cout << "| |  | | | (_) | (_| | | | \\ \\ |_| | | | |  " << endl;
	cout << "|_|  |_|  \\___/ \\__, | |_|  \\_\\__,_|_| |_|" << endl;
	cout << "                 __/ |                        " << endl;
	cout << "                |___/                         " << endl;
	cout << "------------------------------------------    " << endl;
}