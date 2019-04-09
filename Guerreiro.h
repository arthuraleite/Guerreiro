#ifndef GUERREIRO_H
#define GUERREIRO_H
#include <string>
using std::string;

class Guerreiro
{
    public:
        Guerreiro();
        void CriarGuerreiro(string);
        ~Guerreiro();

    private:
        string nomeGuerreiro;
        int poderDeAtaque;
        int velocidade;
};
#endif // GUERREIRO_H
