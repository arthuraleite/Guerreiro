#ifndef MAPA_H
#define MAPA_H

class Mapa
{
public:
	Mapa();
	~Mapa();
	void prepararMapa() const;
	void prepararItens();
	void prepararNPC();

private:
	//Mapas - Coordenadas
	const static int MAPA_X[5];
	const static string MAPA_Y[5];
	
	//NPCs
	const static int NUMNPC = 5;
	static int NPCPosicaoX[NUMNPC];
	static string NPCPosicaoY[NUMNPC]; 
	static int NPCAtivos;
	
	//Itens do Jogo
	const static int NUMNPC = 7;
	static int ItensPosicaoX[NUMNPC];
	static string ItensPosicaoY[NUMNPC];
};

#endif // MAPA_H
