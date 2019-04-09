#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <iostream>
#include <string>
using std::string;

class Guerreiro
{
    public:
        Guerreiro();
        ~Guerreiro();
		static void apresentarRegras(const string &);
		void movimentarGuerreiro(const string &, int);
		

    private:
        string nomeGuerreiro;
        int poderDeAtaque;
        int velocidade;
		int posicaoY; //Vertical 
		int posicaoX; //Horizontal
		
		static int jogadoresAtivos;
};
#endif // GUERREIRO_H
