#include <iostream>
#include "fracao.h"
using namespace std;

/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programacao Orientada a Objetos
Compilando no VSCode  - Tecla F6
Compilando no DEV-C++ - Tecla F11

Entradas testadas e checadas: { [(5/2) e (3/1)], [(6/5) e (1/2)]} 
*/

int main(){
	
	int n1, d1, n2, d2;
	cout<<"Sobrecarga de Operadores\n"<<endl;
	cout<<"Digite a primeira fracao: "<<endl;
	cout<<"Numerador: "<<endl;
	cin>>n1;
	cout<<"Denominador: "<<endl;
	cin>>d1;
	cout<<"Digite a segunda fracao: "<<endl;
	cout<<"Numerador: "<<endl;
	cin>>n2;
	cout<<"Denominador: "<<endl;
	cin>>d2;
	
	Fracao prim(n1, d1), seg(n2, d2), terc, aux;	//criacao dos objetos
	terc = prim + seg;
	cout<<"\n\tSoma resultante: ";
	cout<< terc.retornaNumerador() << "/"<< terc.retornaDenominador()<<endl;
	aux = ++terc;
	cout<<"\tIncrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;
	aux = ----terc;
	cout<<"\tDecrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;
	
	terc = prim - seg;
	cout<<"\n\tSubtracao resultante: ";
	cout<< terc.retornaNumerador() << "/"<< terc.retornaDenominador()<<endl;
	aux = ++terc;
	cout<<"\tIncrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;
	aux = ----terc;
	cout<<"\tDecrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;	
	
	terc = prim * seg;
	cout<<"\n\tMultiplicacao resultante: ";
	cout<< terc.retornaNumerador() << "/"<< terc.retornaDenominador()<<endl;	// retornei no mesmo print as duas funções requisitadas, pra impressão não ficar estranha.
	aux = ++terc;
	cout<<"\tIncrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;
	aux = ----terc;
	cout<<"\tDecrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;	
	
	terc = prim / seg;
	cout<<"\n\tDivisao resultante: ";
	cout<< terc.retornaNumerador() << "/"<< terc.retornaDenominador()<<endl;
	aux = ++terc;
	cout<<"\tIncrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;
	aux = ----terc;
	cout<<"\tDecrementa: " << aux.retornaNumerador() << "/ "<< aux.retornaDenominador()<<endl;

	return 0;
}
