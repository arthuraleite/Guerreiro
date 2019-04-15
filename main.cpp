#include <iostream>
#include <string>
#include "Guerreiro.h"
#include "Itens.h"

using std::string;
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    Guerreiro warrior;

	cout<<"Voce deseja ler as regras? \n(Digite 'S' para sim ou 'N' para nao): ";
	string mostrarRegras;
	cin>> mostrarRegras;

	warrior.apresentarRegras(mostrarRegras);

	Itens itens;
	
	int itensDoGuerreiro[warrior.getQteItens()];
	for(int cont = 0; cont < warrior.getQteItens(); cont++)
	{
		itensDoGuerreiro[cont] = warrior.getItensArmazenados(cont);
	}
	
	itens.apresentarItensGuerreiro(warrior.getQteItens(), itensDoGuerreiro);
}
