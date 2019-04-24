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
:posicaoY("A"), posicaoX(0), vida(3),  qteItens(3)
{
	for(int cont = 0; cont < 3; cont++)
	{
		itensArmazenados[cont] = cont + 1;
	}
	
	jogadoresAtivos++;
	cout<<"Bem vindo ao MedievalGame!\n";
	
	cout<<"De um nome para seu guerreiro: ";
	cin>> nomeGuerreiro;
}

void Guerreiro::apresentarRegras(const string &mostrarRegras)
{
	if(mostrarRegras == "S")
	{
		cout<<":::::::::REGRAS:::::::::\nEscrever regras aqui\n\n";
	}
}
{*
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
	
	cout<<"A posicao de "<<Guerreiro::nomeGuerreiro<<" posicao atual e: {0},{1}", Guerreiro::posicaoY, Guerreiro::posicaoX;
}*/

int Guerreiro::getQteItens()
{
	return qteItens;
}

int Guerreiro::getItensArmazenados(int posicao)
{
	return itensArmazenados[posicao];
}

int Guerreiro::addVida()
{
	vida++; 
	return vida;
}

int Guerreiro::addImunidade()
{ 
	ImunidadeTemporaria++; 
	return ImunidadeTemporaria;
}

int Guerreiro::addPoderDeAtaque()
{
	poderDeAtaque++; 
	return poderDeAtaque;
}

int Guerreiro::addPoderDeDefesa()
{ 
	poderDeDefesa++; 
	return poderDeDefesa;
}

int Guerreiro::addVelocidade()
{ 
	velocidade++; 
	return velocidade;
}
Guerreiro::~Guerreiro()
{
}

