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
		int getQteItens();
		int getItensArmazenados(int);
		void movimentarGuerreiro(const string &, int);
		void info() const;

    private:
        string nomeGuerreiro;
        int vida;
		int poderDeAtaque;
        int velocidade;
		int areaDoMapa;
		int Cash;
		int qteItens;
		int itensArmazenados[10];
		
		const static int NUMINIMIGOS = 100;
		
		static int InimgosposicaoX[NUMINIMIGOS];
		static string InimgosposicaoY[NUMINIMIGOS];
		
		int posicaoX; //Horizontal
		string posicaoY; //Vertical 
		
		static int jogadoresAtivos;
};
#endif // GUERREIRO_H
