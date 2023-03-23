#include "GG.h"

BancoDeDados AlimentarBancoDeDados(BancoDeDados X){
	for(int i=0; i<21; i++){
		X.Pesos[i] = PesosD[i];
		X.Valores[i] = ValoresD[i];
	}
	return X;
}

int Unidade3(int CapacidadeMaxima, int Pesos[], int Valores[], int n)
{
	// Matriz que será preenchida...
	int V[n + 1][CapacidadeMaxima + 1];

	// Inicializando a primeira linha e primeira coluna com 0
	for(int w = 0; w <= CapacidadeMaxima; w++)
		V[0][w] = 0;
	for(int i = 1; i <= n; i++)
		V[i][0] = 0;

	for(int i = 1; i <= n; i++)
	{
		for(int w = 1; w <= CapacidadeMaxima; w++)
		{	
			// Elemento pode fazer parte da solução
			if(Pesos[i - 1] <= w)
			{
				// max...
				if((Valores[i - 1] + V[i - 1][w - Pesos[i - 1]]) > V[i - 1][w])
					V[i][w] = Valores[i - 1] + V[i - 1][w - Pesos[i - 1]];
				else
					V[i][w] = V[i - 1][w];
			}
			else
				V[i][w] = V[i - 1][w]; // wi > w
		}
	}

	// Retorna o valor máximo colocado na mochila
	return V[n][CapacidadeMaxima];
}