// Tema 3 - Jogo de Corrida.
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

// Identificador da fun��o 'imprimir_espa�os'.
void imprimir_espacos(int total);

int main()
{
	// Quantidade Total de Espa�os.
	int total_espacos = 10;
	int rodada = 0;
	
	/*	//La�o para as rodadas do jogo.
	*	A cada rodada o carro do jogador anda 1 (um) espa�o.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*/
	while (rodada < total_espacos)
	{
		// Mostra em tela o Letreiro do Jogo.
		 cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		// Jogador 1: 
		//	a) Coloca uma quantidade de espa�os dependendo da rodada.
		//  b) Mostra o carro.
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;

		// Limpa a tela para mostrar a pr�xima rodada.
		system("cls");

		// Passa para a pr�xima rodada do la�o.
		rodada++;
	}

	return 0;
}

	//A fun��o serve pra mostrar espa�os em branco na tela.

int total; //Quantidade de espa�os que ser�o mostrados.


void imprimir_espacos(int total)
{
	// Imprime espa�os de 'qntd_atual' at� 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}


	