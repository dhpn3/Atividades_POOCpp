#include<iostream>
#include<math.h>

/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programaçao Orientada a Objetos
Compilando no VSCode  - Tecla F6
Compilando no DEV-C++ - Tecla F11

Obs: nao consegui incluir os 3 arquivos por causa de erros na IDE.
Bati muita cabeça e não tive tempo pra tirar duvidas na aula de terça. Tentei usar os arquivos .h e main.cpp, mas nao tive tempo
pra implementar todo o codigo e tirar todas as minhas duvidas.
*/

using namespace std;
class Complexo
{
private:
	float a,b,x,y;

public:
	Complexo(float A, float B);
	Complexo Multiplicacao(class Complexo C1);
	Complexo Divisao(class Complexo C1);
	Complexo Soma(class Complexo C1);
	Complexo Subtracao(class Complexo C1);
	void TransformaEmPolar();
	void TransformaEmRetangular();
	void Imprime();
	~Complexo();
};

Complexo::Complexo(float A, float B){
	a=A;
	b=B;
	Complexo::TransformaEmPolar();
}

Complexo Complexo::Multiplicacao(class Complexo C1){
	Complexo C2(0,0);
	C2.x=x*C1.x;
	C2.y=y+C1.y;
	C2.Complexo::TransformaEmRetangular();
	return C2;
}

Complexo Complexo::Divisao(class Complexo C1){
	Complexo C2(0,0);
	C2.x=x/C1.x;
	C2.y=y-C1.y;
	C2.Complexo::TransformaEmRetangular();
	return C2;	
}

Complexo Complexo::Soma(class Complexo C1){
	Complexo C2(0,0);
	C2.a=a+C1.a;
	C2.b=b+C1.b;
	C2.Complexo::TransformaEmPolar();
	return C2;
}

Complexo Complexo::Subtracao(class Complexo C1){
	Complexo C2(0,0);
	C2.a=a-C1.a;
	C2.b=b-C1.b;
	C2.Complexo::TransformaEmPolar();
	return C2;
}

void Complexo::TransformaEmPolar(){
	x=sqrt(a*a+b*b);
	y=asin(b/x);
};

void Complexo::TransformaEmRetangular(){
	a=x*cos(y);
	b=x*sin(y);
	
	if(a<0.000001)
	    a=0;
	if(b<0.000001)
	    b=0;  
};

void Complexo::Imprime(){
	cout<<"\tForma Retangular: "<<a<<" + "<<b<<"i.\n\tForma Polar: "<<x<<"(cos("<<180*y/3.14159<<") + i*sen("<<180*y/3.14159<<"))."<<endl;
	};
	
	Complexo::~Complexo(){
	}
	
int main(){
	
	int a,b;
	cout<<"Digite a parte real do numero complexo Z1.\n"<<"a: ";
	cin>>a;
	cout<<"Digite a parte imaginaria do numero complexo Z1.\n"<<"b: ";
	cin>>b;
	
	Complexo C1(a,b);
	C1.Imprime();
	cout<<"\nDigite a parte real do numero complexo Z2.\n"<<"a: ";
	cin>>a;
	cout<<"Digite a parte imaginaria do numero complexo Z2.\n"<<"b: ";
	cin>>b;
	cout<<"\n";
	Complexo C2(a,b);
	C2.Imprime();
	Complexo C3=C1.Multiplicacao(C2);
	cout<<"\n\tResultado da Multiplicacao: "<<endl;
	C3.Imprime();
	cout<<"\n\tResultado da divisao: "<<endl;
	C3=C1.Divisao(C2);
	C3.Imprime();
	cout<<"\n\tResultado da soma: "<<endl;
	C3=C1.Soma(C2);
	C3.Imprime();
	cout<<"\n\tResultado da subtracao: "<<endl;
	C3=C1.Subtracao(C2);
	C3.Imprime();
	
	system("pause");
	return 0;
}
