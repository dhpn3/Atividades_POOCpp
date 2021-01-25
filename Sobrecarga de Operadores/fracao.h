#include <iostream>
#include <stdlib.h>

class Fracao
{
private:
	int numerador, denominador;
	
public:
	Fracao();
	Fracao(int num, int deno);
	Fracao operator*(Fracao seg);	//multiplicacao
	Fracao operator+(Fracao seg);	//adicao
	Fracao operator-(Fracao seg);	//subtracao
	Fracao operator/(Fracao seg);	//divisao
	Fracao operator ++();	// pré-fixada
	Fracao operator ++(int);	//pos-fixada
	Fracao operator --();	//pos-fixada
	Fracao operator --(int);
	int retornaNumerador();
	int retornaDenominador();
};

