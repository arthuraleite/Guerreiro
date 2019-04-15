#ifndef ARMADURA_H
#define ARMADURA_H

class Armadura
{
public:
	Armadura();
	void info() const;
	void adquirirArmadura();
	void danoRecebido(int);
	~Armadura();

private:
	int vida;
	int duracao; //Dura 3 rodadas;
	int rodadasPassadas;
	
};

#endif // ARMADURA_H
