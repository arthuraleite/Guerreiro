#ifndef GUERREIRO_H
#define GUERREIRO_H

class Guerreiro
{
public:
	Guerreiro();
	void criandoGuerreiro();
	string getNome( string );
	void mostrarNome();
	

};

private:
	string nomeGuerreiro;
	int atackPower;
	int velocidade;
};
#endif // GUERREIRO_H
