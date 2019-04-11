#include "Guerreiro.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::rand;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Guerreiro::jogadoresAtivos = 0;

Guerreiro::Guerreiro()
:posicaoY("A"), posicaoX(0), vida(3)
{
	jogadoresAtivos++;
	cout<<"Bem vindo ao MedievalGame!\n";
	
	cout<<"Dê um nome para seu guerreiro: ";
	cin>> nomeGuerreiro;
}

void Guerreiro::apresentarRegras(const string &mostrarRegras)
{
	if(mostrarRegras == "S")
	{
		cout<<":::::::::REGRAS:::::::::\n";
	}
}

void Guerreiro::movimentarGuerreiro(const string &direcao, int espacoPercorrido)
{
	int aux = (direcao == "V") ? 1 : 2;
	
	switch (aux)
	{
		case 1:
			posicaoY += espacoPercorrido;
			break;
		case 2:
			posicaoX += espacoPercorrido;
			break;
	}
	
	cout<<"A posição de "<<Guerreiro::nomeGuerreiro<<" posição atual é: {0},{1}", Guerreiro::posicaoY, Guerreiro::posicaoX;
}

void Guerreiro::prepararMapa()
{
	string vetorNumerico = ("A", "B", "C", "D", "E");
	int contAux = 0;
	for (int cont = 0; cont < Guerreiro::numInimigos; cont++)
	{
		InimgosposicaoX[cont] = rand(4);
		InimgosposicaoY[cont] = vetorNumerico[rand(4)];
		contAux++;
		
		while(InimgosposicaoX == 0 && InimgosposicaoY == 'A'){
			InimgosposicaoX[cont] = rand(4);
			InimgosposicaoY[cont] = vetorNumerico[rand(4)];
		}
		
		if(contAux > 0)
		{
			for(int cont2 = 0; cont2 = contAux; cont2++)
			{
				while(InimgosposicaoX[cont] == InimgosposicaoX[cont2] && InimgosposicaoY[cont] == InimgosposicaoY[cont2]){
					InimgosposicaoX[cont] = rand(4);
					InimgosposicaoY[cont] = vetorNumerico[rand(4)];
				 }
			 }
		 }
	}
	
	//cout<<""
}
Guerreiro::~Guerreiro()
{
}

