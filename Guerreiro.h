#ifndef GUERREIRO_H
#define GUERREIRO_H
#include <string>
using std::string;

class Guerreiro
{
    public:
        Guerreiro();
        ~Guerreiro();
		static void apresentarRegras(const string &);
		int getQteItens();
		int getItensArmazenados(int);
		void movimentarGuerreiro(const string &, int);
		void info() const;
		int addVida();
		int addImunidade();
		int addPoderDeAtaque();
		int addPoderDeDefesa();
		int addVelocidade();

private:
		string nomeGuerreiro;
        int vida;
		int ImunidadeTemporaria;
		int poderDeAtaque;
		int poderDeDefesa;
        int velocidade;
		int posicaoX; //Horizontal
		string posicaoY; //Vertical
};
#endif // GUERREIRO_H
