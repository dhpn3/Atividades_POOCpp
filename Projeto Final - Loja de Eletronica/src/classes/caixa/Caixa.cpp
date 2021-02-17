#include <iostream>
#include "Caixa.h"

using namespace std;

bool Caixa::iniciarMenu() {
	int op;
	cout << "(1) Estoque Completo   (2) Produto Especifico (3) Voltar" << endl;
	cout << "O que voce deseja consultar: ";
	cin >> op;
	
	system("clear||cls");

	if(op == 1) {
		produto.putData();
	}
	else if (op == 2) {
		cout < "Produto";
	}
	else if (op == 3) return 1;
}
