#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <math.h>
/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos
Lista 1 - Exercício 3.
*/

float MMC(int altura, char sexo){
    float p;

    if(sexo == 'M' || sexo == 'm'){
        p = ((72.7 * altura) - 58);
    }
    else if(sexo == 'F' || sexo == 'f'){
        p = (62.1 * altura) - 44.7;
    }
    else{
        printf("Opcao invalida!");
    }
    return p;
}

int main(){

    float alt;
    float peso;
    char sexo;

    printf("\tPeso ideal\n");
    printf("digite sua altura: ");
    scanf("%f", &alt);
    printf("\ndigite seu sexo (M ou F): ");
    sexo = getch();
    printf("\nO sexo escolhido: ", putchar(sexo));
    peso = MMC(alt, sexo);

    printf("\n\npeso ideal: %.2f", peso);
    return 0;
}