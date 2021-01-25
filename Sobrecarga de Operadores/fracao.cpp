#include <iostream>
#include "fracao.h"

using namespace std;
	
	Fracao::Fracao(){	//construtor vazio
		numerador = 0;
		denominador = 0;
	}
	
	Fracao::Fracao(int num, int deno){	//construtor com argumentos
		numerador = num;
		denominador = deno;
	}
	
	Fracao Fracao::operator+(Fracao seg){	//soma
		Fracao result;
		result.numerador = (numerador * seg.denominador + seg.numerador * denominador);
		result.denominador = denominador * seg.denominador;
		return result;
	}
	
	Fracao Fracao::operator-(Fracao seg){	//subtracao
		Fracao result;
		result.numerador = (numerador * seg.denominador - seg.numerador * denominador);
		result.denominador = denominador * seg.denominador;
		return result;
	}
	
	Fracao Fracao::operator*(Fracao seg){	//multiplicacao
		Fracao result;
		result.numerador = numerador * seg.numerador;
		result.denominador = denominador * seg.denominador;
		return result;
	}
	
	Fracao Fracao::operator/(Fracao seg){	// divisao
		Fracao result;
		result.numerador = numerador * seg.denominador;
		result.denominador = denominador * seg.numerador;
		return result;
	}
	
	int Fracao::retornaNumerador(){	//funcao requerida p retornar numerador RESULTANTE
		return numerador;
	}
	
	int Fracao::retornaDenominador(){	//funcao requerida p retornar denominador RESULTANTE
		return denominador;
	}
	
	Fracao Fracao::operator++(){	//incrementa pré-fixada ++x
		numerador = numerador + denominador;
		return *this;
	}
	
	Fracao Fracao::operator++(int){	//incrementa pós-fixada x++;
		Fracao result;
		result.numerador = numerador;
		result.denominador = denominador;
		numerador = numerador + denominador;
		return result;
	}
	
	Fracao Fracao::operator--(){	//decrementa pré-fixada
		numerador = numerador - denominador;
		return *this;
	}
	
	Fracao Fracao::operator--(int){	//decrementa pós-fixada
		Fracao result;
		result.numerador = numerador;
		result.denominador = denominador;
		numerador = numerador - denominador;
		return result;
	}
	
	
	
