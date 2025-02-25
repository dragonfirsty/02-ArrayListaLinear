// Claudio Souza Nunes

#include <iostream>
using namespace std;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void buscarElemento();
//--------------------------


const int MAX = 5;
int lista[MAX]{};
int nElementos = 0;


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 6) {
		system("cls"); // somente no windows
		cout << "Menu Lista Linear";
		cout << endl << endl;
		cout << "1 - Inicializar Lista \n";
		cout << "2 - Exibir quantidade de elementos \n";
		cout << "3 - Exibir elementos \n";
		cout << "4 - Buscar elemento \n";
		cout << "5 - Inserir elemento \n";
		cout << "6 - Sair \n\n";

		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2: exibirQuantidadeElementos();
			break;
		case 3: exibirElementos();
			break;
		case 4: buscarElemento();
			break;
		case 5: inserirElemento();
			break;
		case 6:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{
	nElementos = 0;
	cout << "Lista inicializada \n";

}

void exibirQuantidadeElementos() {

	cout << "Quantidade de elementos: " << nElementos << endl;

}

void exibirElementos()
{
	if (nElementos == 0)
	{
		cout << " A lista esta vazia \n";
	}
	else {
		cout << "Elementos: \n";
		for (int n = 0; n < nElementos; n++) {
			cout << lista[n] << endl;
		}
	}
}

void inserirElemento()
{
	if (nElementos < MAX) {
		cout << "Digite o elemento: ";
		cin >> lista[nElementos];
		nElementos++;
	}
	else {
		cout << "Lista cheia";
	}

}

// deve ser implementada como resposta ao exercicio [1,4,7,2,7]
void buscarElemento()
{
	int numeroEscolhido;
	int quantasVezes = 0;
	int posicoes[MAX];
	cout << "Digite o numero: ";
	cin >> numeroEscolhido;

	for(int n = 0;n<MAX;n++){
		if(numeroEscolhido == lista[n]){
			posicoes[quantasVezes] = n;
			quantasVezes++;
		}
	}

	if(quantasVezes == 0){
		cout << "Nâo foi encontrado nenhuma vez";
	}
	else if(quantasVezes == 1){
		cout << "foi encontrado o valor: " << numeroEscolhido <<endl;
		cout << " Na Posicao: " << posicoes[0];
	}
	else{
		cout << "Foi encontrado o valor:" << numeroEscolhido << endl;
		cout << quantasVezes << " vezes" << endl;
		cout << "Nas posicoes:";
		for(int n = 0;n<quantasVezes;n++){
			cout << posicoes[n] << ",";
		}
	}
	
}