#include "Guerreiro.h"
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Guerreiro::jogadoresAtivos = 0;

Guerreiro::Guerreiro()
:posicaoY(0), posicaoX(0)
{
	jogadoresAtivos++;
	cout<<"Bem vindo ao MedievalGame!\n";
}

void Guerreiro::apresentarRegras(const string &mostrarRegras)
{
	if(mostrarRegras == "Y")
	{
		cout<<":::::::::REGRAS:::::::::";
	}
}

void Guerreiro::movimentarGuerreiro(const string &direcao, int metrosPercorridos)
{
	switch (direcao)
	{
		case 'V':
			posicaoY = metrosPercorridos;
			break;
		case 'H':
			break;
		case 'D':
			break;
	}
}

Guerreiro::~Guerreiro()
{
}

