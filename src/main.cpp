/**
  *@title FrogRun
  *@file main.cpp
  *@version 1.0
  *@date 27/04/2017
  *@author Lucas Nathaniel
  *@brief principal funcao do programa, consiste em armazenar jogadores em uma lista encadeada e percorrer até um jogador vencer a partir de números aleatórios
  *
  */

#include "main.h"

int main(){
	system("clear");
	Interface();
	cout << "Bem-vindo à FrogRun!" << endl;
	cout << "Digite a quantidade de jogadores:" << endl;
	int jogadores, rodadas, i, maior = 0;
	char random;
	string identidade, vencedor;
	cin >> jogadores;
	Lista* corrida = new Lista();
	for(i = 1; i <= jogadores; i++){
		cout << "Digite o nome do jogador " << i << endl;
		cin >> identidade;
		corrida->insertEnd(identidade);
	}
	cout << "Digite a quantidade de rodadas:" << endl;
	cin >> rodadas;
	system("clear");
	Interface();
	cout << "                 Começou!                 " << endl;
	cout << "------------------------------------------" << endl;
	Sapos* percorre = corrida->getFirst();
	for (i = 1; i <= rodadas; i++){
		cout << "Rodada: " << i << endl;
		while(percorre != NULL){
			cout << "Vez do jogador: " << percorre->getId() << endl;
			cout << "Digite uma letra qualquer para prosseguir" << endl;
			cin >> random;
			percorre->setPercorreu(percorre->getPercorreu() + rand() % (10));
			cout << "Distancia total percorrida: " << percorre->getPercorreu() << endl;
			percorre = percorre->getNext();
			cout << endl;
		}
		cout << endl;
		percorre = corrida->getFirst();
	}
	cout << "Digite uma letra qualquer para prosseguir" << endl;
	cin >> random;
	system("clear");
	Interface();
	cout << "                 Finish!                  " << endl;
	cout << "------------------------------------------" << endl;
	
	while(percorre != NULL){
		if(percorre->getPercorreu() > maior){
			maior = percorre->getPercorreu();
			vencedor = percorre->getId();
		}
		percorre = percorre->getNext();
	}
	cout << "O vencedor é " << vencedor << " com uma distancia percorrida de: " << maior << endl;
	delete corrida;
	
	return 0;
}