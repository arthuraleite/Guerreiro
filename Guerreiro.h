#ifndef GUERREIRO_H
#define GUERREIRO_H

class Guerreiro
{
public:
	Guerreiro();
	void criarGuerreiro(){
		cout << "Bem vindo ao Medieval Game!";
	}
	string getNome(string);
	void mostrarGuerreiro();
	

};

private:
	string nomeGuerreiro;
	int atackPower;
	int velocidade;
};
#endif // GUERREIRO_H
