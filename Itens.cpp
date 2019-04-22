#include "Itens.h"
#include "Guerreiro.h"
#include <string>

using std::cout;

string Itens::nomeItens[MAXITENS] = {"Pocao de Vida", "Pocao de Imunidade", "Espada Mortal", "Escudo Indestrutivel", "Botas de Hermes"};

Itens::Itens()
:qte(0), maxItens(3),
{
	apresentarItens();
}

void Itens::apresentarTodosItens() const
{
	cout << "Os itens diponiveis sao:\n";
	
	for(int cont = 0; cont < ITENS; cont++)
	{
		cout	<<cont
				<< " - "
				<<nomeItens[cont]
				<< "\n";
	}
	
	int itemSelecionado = -1;
	
	while(itemSelecionado < 0 || itemSelecionado > 4)
	{
		cout<<"Você pode adicionar um item.\n"
			<<"Digite um dos números acima para escolher um item: ";
		cin>>itemSelecionado;
		
		if(itemSelecionado < 0 || itemSelecionado > 4)
		{
			cout<<"Opa! Você digitou uma opção inválida.";
		}
	}
	
	adicionarItens(itemSelecionado);
}
void Itens::apresentarItensGuerreiro() const
{
	cout << "Seus itens sao:\n";
	
	for(int cont = 0; cont < qte; cont++)
	{
		cout	<<Itens[cont]
				<< "\n";
	}
}

void Itens::adicionarItens(int itemEscolhido)
{
	if(qte < maxItens)
	{
		itensGuerreiro[qte] = itemEscolhido;
		cout<<"Você adicionou um(a) "
			<<Itens[itemEscolhido];
		
		switch(itemEscolhido)
		{
			case 0:
				Guerreiro::addVida();
				break;
			case 1:
				Guerreiro::addImunidade();
				break;
			case 2:
				Guerreiro::addPoderDeAtaque();
				break;
			case 3:
				Guerreiro::addPoderDeDefesa();
				break;
			case 4:
				Guerreiro::addVelocidade();
				break;
		}
		
		qte++;
	}
	else
	{
		cout<<"Você não pode mais adicionar itens.";
	}
}

void Itens::excluirItens(int)
{
	
}

Itens::~Itens()
{
}