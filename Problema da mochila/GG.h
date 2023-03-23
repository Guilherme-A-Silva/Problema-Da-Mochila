#ifndef _GG_H
#define _GG_H

/* Bibliotecas utilizadas */

#include <iostream>	

using namespace std;

typedef struct {
	float PesoMaximoSuportado;
	int PesoCaixa;
	int ValorMaximo;
}Mochila;


typedef struct {
	int Pesos[21];
	int Valores[21];
}BancoDeDados;

static int PesosD[] = {0, 200, 250, 450, 100, 300, 200, 400, 100, 50, 350, 250, 450, 50, 400, 100, 350, 200, 300, 200, 150};
static int ValoresD[] = {0, 7, 9, 4, 12, 10, 2, 13, 1, 7, 8, 11, 13, 6, 4, 10, 1, 6, 2, 7, 8};

/* PROTOTIPAÇÃO DE FUNÇÕES */

BancoDeDados AlimentarBancoDeDados(BancoDeDados X);
int Unidade3(int CapacidadeMaxima, int Pesos[], int Valores[], int n);

#endif