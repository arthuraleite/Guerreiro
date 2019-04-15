#ifndef ITENS_H
#define ITENS_H
#include <string>

using std::string;

class Itens
{
public:
	Itens();
	void info() const;
	void apresentarItens() const;
	void adicionarItens(int);
	void excluirItens(int);
	void apresentarItensGuerreiro(int, int []) const;
	~Itens();

private:
	const static int MAXITENS = 5;
	static string nomeItens[MAXITENS];
	
	//static string DescricaoItem [MAXITENS];
	//static valorItem[MAXITENS];

};

#endif // ITENS_H
