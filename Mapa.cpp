#include "Mapa.h"
#include "Itens.h"

string Mapa::MAPA_Y[5] = {"A", "B", "C", "D", "E"};
int Mapa::MAPA_X[5] = {0, 1, 2, 3, 4};

Mapa::Mapa()
{
	prepararMapa();
}
	
	void prepararItens()
	{
		for(int cont = 0; cont < NUMITENS; cont++)
		{
			//Eixo X
			ItensPosicaoX[cont] = rand(5);
			
			//Eixo Y
			ItensPosicaoY[cont] = MAPA_Y[rand(5)];
			
			for(int cont2 = 0; cont2 < cont - 1; cont2++)
			{
				while(ItensPosicao)
			}
		}
	}
	
	void prepararNPC()
	{
		
	}

Mapa::~Mapa()
{
}

