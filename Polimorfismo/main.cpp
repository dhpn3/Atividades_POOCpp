#include <iostream>
#include <stdlib.h>
#include <string.h>	
#include "conta.h"
using namespace std;

/*
Aluno: Djhonathan Paiva	| GRR: 20182753

Para fins de interacao com o usuario, deixei um menu de preenchimento direto na funcao main(). Nao sabia se precisava. Mas,
caso queira so testar o codigo, deixei comentado um bloco de codigo para testar os objetos com nomes TESTE, para visualizacao rapida
de uma funcao main().
*/

/*
int main(){
	ContaComum Comum1("Joao TESTE", 123654, 0);
	ContaPoupanca Poup1("Maria TESTE", 111111, 0, "01/02/03");
	Comum1.depositar(50);
	Poup1.depositar(100);
	Comum1.extrato();
	Poup1.extrato();
	system("pause
	return 0;
}
*/

int main(){
	char nome[50], aniversario[15]; 
	char op;
	int numero;
	float saldo;
	float xcomum, xpoupanca;
	
	cout << "--\tCaixa eletronico\t--" << endl;
	cout << "Escolha o tipo de conta que deseja criar..." << endl;
	cout << "1. Conta Comum\n2. Conta Poupanca\n3. Sair" << endl;
	cout << "Opcao: ";
	cin >> op;
	
	while(true){
		if(op == '1'){
			cout<< "\nConta Comum" << endl;
			cout<< "Digite suas informacoes:" << endl;
			cout << "Primeiro nome: ";
			cin >> nome;
			cout << "\nNumero: ";
			cin >> numero;
			cout << "\nSaldo: ";
			cin>> saldo;
			break;
		}
		else if(op == '2'){
			cout<< "\nConta Poupanca" << endl;
			cout<< "Digite suas informacoes:" << endl;
			cout << "Primeiro Nome: ";
			cin >> nome;
			cout << "\nNumero: ";
			cin >> numero;
			cout << "\nSaldo: ";
			cin >> saldo;
			cout << "\nAniversario: ";
            cin >> aniversario;
            break;
		}
		else if(op == '3'){
			cout<< "\nSaindo..." << endl;
			system("pause");
			abort();
		}
		else{
			cout << "Opcao invalida. Tente novamente..."<<endl;
			main();
		}
	}
/* Para usar nome composto, teria que usar a funcao getline() da biblioteca <string>. Como no exercicio pede pra ser um vetor de char,
para nao dificultar, pedi apenas o primeiro nome nas informacoes do usuario.*/	

	ContaComum Comum1(nome, numero, saldo);
	ContaPoupanca Poup1(nome, numero, saldo, aniversario);
	
	if(op == '1'){
		cout << "\n\tFaca um deposito\nDigite o valor (R$): ";
		cin >> xcomum;
		Comum1.depositar(xcomum);
		Comum1.extrato();
	}
	if(op == '2'){
		cout << "\n\tFaca um deposito\nDigite o valor (R$): ";
		cin >> xpoupanca;
		Poup1.depositar(xpoupanca);
		Poup1.extrato();
	}
	cout<<"\nSaindo..."<<endl;
	system("pause");
	return 0;
}
