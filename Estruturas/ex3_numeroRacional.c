#include <stdio.h>
#include <stdlib.h>
/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos
Compilando no VSCode  - Tecla F6
Compilando no DEV-C++ - Tecla F11
*/

struct Racional{
	int Num, Den;
	int NumSimp, DenSimp;
	float Rac;
};
void RecebeNumeros(struct Racional *N,struct Racional *M){
	printf("Digite o numerador A.\n");
	scanf("%d",&(*N).Num);
	printf("Digite o denominador A.\n");
	scanf("%d",&(*N).Den);
	(*N).Rac=(float)(*N).Num/(*N).Den;
	printf("Digite o numerador B.\n");
	scanf("%d",&(*M).Num);
	printf("Digite o denominador B.\n");
	scanf("%d",&(*M).Den);
	(*M).Rac=(float)(*M).Num/(*M).Den;
}
void SimplificaRacional(struct Racional *N){
	int a,i;
	(*N).DenSimp=(*N).Den;
	(*N).NumSimp=(*N).Num;
	if ((*N).NumSimp>(*N).DenSimp)
		a=(*N).DenSimp;
	else
		a=(*N).NumSimp;
	for (i=a;i>1;i--){
		if((*N).NumSimp%i==0&&(*N).DenSimp%i==0){
			(*N).NumSimp=(*N).NumSimp/i;
			(*N).DenSimp=(*N).DenSimp/i;
		}
	}
}
void ExibicaoDupla(struct Racional *N,struct Racional *M){
	printf("Numero Racional A:\nNumerador: %d\nDenominador:%d\n\n",(*N).Num,(*N).Den);
	printf("Numero Racional B:\nNumerador: %d\nDenominador:%d\n\n",(*M).Num,(*M).Den);
	printf("A = %d/%d = %d/%d = %.3f.\n",(*N).Num,(*N).Den,(*N).NumSimp,(*N).DenSimp,(*N).Rac);
	printf("B = %d/%d = %d/%d = %.3f.\n",(*M).Num,(*M).Den,(*M).NumSimp,(*M).DenSimp,(*M).Rac);
}
void Adicao(struct Racional N,struct Racional M){
	struct Racional X;
	X.Den=N.Den*M.Den;
	X.Num=N.Num*M.Den+M.Num*N.Den;
	SimplificaRacional(&X);
	X.Rac=(float)X.Num/X.Den;
	printf("A + B = %d/%d = %d/%d = %.3f\n",X.Num,X.Den,X.NumSimp,X.DenSimp,X.Rac);
}
void Subtracao(struct Racional N,struct Racional M){
	struct Racional X;
	X.Den=N.Den*M.Den;
	X.Num=N.Num*M.Den-M.Num*N.Den;
	SimplificaRacional(&X);
	X.Rac=(float)X.Num/X.Den;
	printf("A - B = %d/%d = %d/%d = %.3f\n",X.Num,X.Den,X.NumSimp,X.DenSimp,X.Rac);
}
void Multiplicacao(struct Racional N,struct Racional M){
	struct Racional X;
	X.Den=N.Den*M.Den;
	X.Num=N.Num*M.Num;
	SimplificaRacional(&X);
	X.Rac=(float)X.Num/X.Den;
	printf("A * B = %d/%d = %d/%d = %.3f\n",X.Num,X.Den,X.NumSimp,X.DenSimp,X.Rac);
}
void Divisao(struct Racional N,struct Racional M){
	struct Racional X;
	X.Den=N.Den*M.Num;
	X.Num=N.Num*M.Den;
	SimplificaRacional(&X);
	X.Rac=(float)X.Num/X.Den;
	printf("A / B = %d/%d = %d/%d = %.3f\n",X.Num,X.Den,X.NumSimp,X.DenSimp,X.Rac);
}
int main(){
	struct Racional N, M;
	RecebeNumeros(&N,&M);
	SimplificaRacional(&N);
	SimplificaRacional(&M);
	ExibicaoDupla(&N,&M);
	Adicao(N,M);
	Subtracao(N,M);
	Multiplicacao(N,M);
	Divisao(N,M);
	return 0;
}