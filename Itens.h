#ifndef ITENS_H
#define ITENS_H
#include <string>

using std::string;

class Itens
{
public:
	Itens();
	void info() const;
	void apresentarTodosItens() const;
	void adicionarItens(int);
	void excluirItens(int);
	void apresentarItensGuerreiro(int, int []) const;
	~Itens();

private:
	const static int ITENS = 5;
	static string Itens[MAXITENS];
	static int maxItens;
	int itensGuerreiro[ITENS];
	int qte;
};

#endif // ITENS_H
