#include "Itens.h"
#include "Guerreiro.h"
#include <string>

using std::cout;

string Itens::nomeItens[MAXITENS] = {"Pocao de Vida", "Pocao de Velocidade", "Espada Mortal", "Escudo Indestrutivel", "Botas de Hermes"};

Itens::Itens()
{
	apresentarItens();
}

void Itens::apresentarItens() const
{
	cout << "Os itens diponiveis sao:\n";
	
	for(int cont = 0; cont < MAXITENS; cont++)
	{
		cout	<<cont
				<< " - "
				<<nomeItens[cont]
				<< "\n";
	}
}
void Itens::apresentarItensGuerreiro(int qte, int itens[]) const
{
	cout << "Seus itens sao:\n";
	
	for(int cont = 0; cont < qte; cont++)
	{
		cout	<<nomeItens[itens[cont]]
				<< "\n";
	}
}

void Itens::adicionarItens(int itemEscolhido)
{
	
}

void Itens::excluirItens(int)
{
	
}

Itens::~Itens()
{
}