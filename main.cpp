#include <iostream>
#include <string>
#include "Guerreiro.h"

using std::string;
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    Guerreiro warrior;
	
	cout<<"Deseja ler as regras? \n(Digite 'S' para sim ou 'N' para nao): ";
	string mostrarRegras;
	cin>> mostrarRegras;
	
	criarGuerreiroAntagonista(warrior);
	Guerreiro::apresentarRegras(mostrarRegras);
}
