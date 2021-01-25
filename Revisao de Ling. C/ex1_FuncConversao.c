#include <stdio.h>
#include <stdlib.h>

/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos
*/

void conversorSegundos( int horas, int minutos,int segundos){

    int conv1, conv2, soma;
    
    printf("\nConvertendo horas, minutos e segundos para apenas segundos:\n\n");
    printf("\tHora digitada: %dh %d min %d s\n", horas, minutos, segundos);

    conv1 = horas*3600;   /*multiplique o valor de tempo por 3600*/
    conv2 = minutos*60; /*multiplique o valor de tempo por 60*/
    soma = conv1+conv2+segundos;
    printf("\tConversao: %d segundos totalizados\n", soma);   
}

int main(){

    int num1, num2, num3;

    printf("\tConversor de horas para segundos\n\n");
    printf("Digite 3 numeros para o formato de hora hh:mm:ss\n");
    printf("Horas:");
    scanf("%d", &num1);
    printf("Minutos:");
    scanf("%d", &num2);
    printf("Segundos:");
    scanf("%d", &num3);

    conversorSegundos(num1,num2,num3);

    return 0;
}