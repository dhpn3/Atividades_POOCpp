#include <stdio.h>
#include <stdlib.h>

/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos
*/


/*funcao*/
int Serie_Soma(int N){
    int num, numerador, denominador, soma, serie;
	
    for(num=1; num<=N; num++){
    	numerador = (num*num+1);
    	denominador = (num+3);
        serie = numerador/denominador;
        printf("(%d / %d), ", numerador, denominador);
        soma = serie + soma;
    }
    return soma;
}

int main(){

    int N, soma;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &N);
    Serie_Soma(N);

    soma = Serie_Soma(N);
    printf("\nSoma: %d", soma);
}