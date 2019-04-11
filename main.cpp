#include <iostream>
#include <string>
#include "Guerreiro.h"

using std::string;
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    Guerreiro warrior;
	Guerreiro::prepararMapa();
	
	cout<<"Você deseja ler as regras? \n(Digite 'S' para sim ou 'N' para nao): ";
	string mostrarRegras;
	cin>> mostrarRegras;
	
	warrior.apresentarRegras(mostrarRegras);
	
	cout<<"Você precisa se movimentar!\n";
	
	string direcao = "A";
	
	while(direcao != "V" && direcao != "H"){
		cout<<"Digite V (para vertical) e H (para horizontal): ";
		cin>> direcao;
	}
	
	int espacoPercorrido = 0;
	
	cout<<"Digite agora quanto você quer percorrer: ";
	cin>> espacoPercorrido;
	
	warrior.movimentarGuerreiro(direcao, espacoPercorrido);
	
	pause;
}
