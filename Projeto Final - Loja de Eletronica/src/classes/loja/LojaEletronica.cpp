#include "LojaEletronica.h"
#include <iostream>

using namespace std;

void LojaEletronica::iniciarMenu() {
	system("clear||cls");
	
	int op;
	
	logo();
	cout << "\n\n(1) Administracao    (2) Consulta de Estoque" << endl;
	cout << "Escolha a Opcao desejada: ";
	cin >> op;
	
	system("clear||cls");

	if(op == 1 && admin.iniciarMenu()) iniciarMenu();
	else if (op == 2 && caixa.iniciarMenu()) iniciarMenu();
	
	iniciarMenu();
}

void LojaEletronica::logo() {
	cout << " _              _               _           ___   _         _                        _             " << endl;
	cout << "| |     ___    (_)  __ _     __| |  ___    | __| | |  ___  | |_   _ _   ___   _ _   (_)  __   __ _ " << endl;
	cout << "| |__  / _ \\   | | / _` |   / _` | / -_)   | _|  | | / -_) |  _| | '_| / _ \\ | ' \\  | | / _| / _` |" << endl;
	cout << "|____| \\___/  _/ | \\__,_|   \\__,_| \\___|   |___| |_| \\___|  \\__| |_|   \\___/ |_||_| |_| \\__| \\__,_|" << endl;
	cout << "             |__/                                                                                  " << endl;
}

