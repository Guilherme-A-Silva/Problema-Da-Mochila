#include "GG.h"

int main(){
	
	/* A capacidade de armazenamento da mochila também 
	será em gramas e deverá ser informada pelo 
	usuário do sistema. */
	
	Mochila MTest; 
	BancoDeDados BTest; // Pesos e Valores Salvos Aqui
	int n = 20; // número total de elementos
	
	cout << "Bem vindo, informe a capacidade de armazenamento da mochila(EM GRAMAS): ", cin >> MTest.PesoMaximoSuportado;
	BTest = AlimentarBancoDeDados(BTest);

	// Obtém o máximo valor que pode ser colocado na mochila
	MTest.ValorMaximo = Unidade3(MTest.PesoMaximoSuportado, BTest.Pesos, BTest.Valores, n);

	cout << "Valor maximo: " << MTest.ValorMaximo << endl;
	
	return 0;
}