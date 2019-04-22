#include "Armadura.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;

Armadura::Armadura()
:vida(2), duracao(3), rodadasPassadas(0)
{
	cout<<"Você encontrou uma armadura!"
		<<"Ela lhe garante +2 de vida por 3 rodadas.";
}

void Armadura::danoRecebido(int dano)
{
	vida = vida - dano;
	cout<<"Você tomou um dano de"
		<<dano
		<<", e agora a sua armadura tem "
		<<vida
		<<" pontos de vida.";
}

void Armadura::info() const
{
	cout<<"Sua armadura tem "
		<<vida
		<<" pontos de vida.\n";
		
		if(duracao - rodadasPassadas == 0)
			cout<<"Essa será a última rodada com uma armadura. Compre novamente.";
		else
			cout<<"Ela durará "
				<<duracao - rodadasPassadas
				<<" rodadas";
}

Armadura::~Armadura()
{
}

