#ifndef GUERREIRO_H
#define GUERREIRO_H
#include <string>
using std::string;

#include <iostream>
#include <string>
using std::string;

class Guerreiro
{
    public:
        Guerreiro();
        ~Guerreiro();
		static void prepararMapa();
		static void apresentarRegras(const string &);
		void movimentarGuerreiro(const string &, int);

    private:
        string nomeGuerreiro;
        int vida;
		int poderDeAtaque;
        int velocidade;
		int areaDoMapa;
		static int numInimigos;
		int InimgosposicaoX [numInimigos];
		static string InimgosposicaoY [numInimigos];
		
		int posicaoX; //Horizontal
		string posicaoY; //Vertical 
		
		static int jogadoresAtivos;
};
#endif // GUERREIRO_H
