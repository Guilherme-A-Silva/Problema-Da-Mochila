#include "GG.h"

int main(){
	
	/* A capacidade de armazenamento da mochila tamb�m 
	ser� em gramas e dever� ser informada pelo 
	usu�rio do sistema. */
	
	Mochila MTest; 
	BancoDeDados BTest; // Pesos e Valores Salvos Aqui
	int n = 20; // n�mero total de elementos
	
	cout << "Bem vindo, informe a capacidade de armazenamento da mochila(EM GRAMAS): ", cin >> MTest.PesoMaximoSuportado;
	BTest = AlimentarBancoDeDados(BTest);

	// Obt�m o m�ximo valor que pode ser colocado na mochila
	MTest.ValorMaximo = Unidade3(MTest.PesoMaximoSuportado, BTest.Pesos, BTest.Valores, n);

	cout << "Valor maximo: " << MTest.ValorMaximo << endl;
	
	return 0;
}