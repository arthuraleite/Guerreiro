#include <iostream>
#include <string>
#include "Guerreiro.h"

using std::string;
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    Guerreiro warrior();
    string nome;
    cout<<"Digite o nome do seu guerreiro: ";
    cin>>nome;
    warrior.CriarGuerreiro(nome);
}
