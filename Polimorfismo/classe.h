#include <iostream>
using namespace std;

class Conta
{
protected:
	char nome[30];	// string nome
	int numero;
	float saldo;
public:
	Conta();
	Conta(char *, int, float);
	void depositar(float);
	virtual void extrato() = 0;	//classe abstrata
};

class ContaComum : public Conta
{
public:
	ContaComum();
	ContaComum(char *, int, float);	//imprime o nome, número e saldo apenas
	void extrato();
};

class ContaPoupanca : public Conta
{
private:
	char aniversario[15];
public:
	ContaPoupanca();
	ContaPoupanca(char *, int, float, char *);	//imprime o nome, número, saldo E aniversário
	void extrato();
};
