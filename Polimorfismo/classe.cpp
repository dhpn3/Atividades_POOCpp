#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "conta.h"
using namespace std;

	Conta :: Conta(){
		strcpy(nome, "vazio");	// nome[10] = "";
		numero = 0000000000000;
		saldo = 0.0;
	}
	
	Conta :: Conta(char *name, int number, float bank){	//bank balance = saldo
		strcpy(nome, name);
		numero = number;
		saldo = bank;
	}
	
	void Conta::depositar(float deposito){
		saldo = saldo + deposito;
	}
	
	ContaComum::ContaComum() : Conta(){
	}

	ContaComum :: ContaComum(char *name, int number, float bank) : Conta(name, number, bank){
	}
	
	void ContaComum::extrato(){
	cout << "\n\t\tExtrato de Conta Comum" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Numero: " << numero << endl;
	cout << "Saldo: " << "R$ " << saldo << endl;
	}

	ContaPoupanca :: ContaPoupanca() : Conta(){
		strcpy(aniversario, "indefinido");
	}
	
	ContaPoupanca::ContaPoupanca(char *name, int number, float bank, char *bday) : Conta(name, number, bank){	//bday = aniversario
		strcpy(aniversario, bday);
	}
	
	void ContaPoupanca::extrato(){
		cout << "\n\t\tExtrato de Conta Poupanca" << endl;
		cout << "Nome: " << nome << endl;
		cout << "Numero: " << numero << endl;
		cout << "Saldo: " << "R$ " << saldo << endl;
		cout << "Aniversario: " << aniversario << endl;
	}
