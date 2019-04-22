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
		inline void addVida(){ vida++; }
		inline void addImunidade(){ ImunidadeTemporaria++; }
		inline void addPoderDeAtaque(){ poderDeAtaque++; }
		inline void addPoderDeDefesa(){ podeDeDefesa++; }
		inline void addVelocidade(){ velocidade++; }

private:
		string nomeGuerreiro;
        int vida;
		int ImunidadeTemporaria;
		int poderDeAtaque;
		int podeDeDefesa;
        int velocidade;
		int posicaoX; //Horizontal
		string posicaoY; //Vertical
};
#endif // GUERREIRO_H
