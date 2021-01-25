#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos
Lista 1 - Exercício 4.
*/

void func_Crip(char *frase){    //tem que usar ponteiro, pois manipulando a posição da string, estará alterando valores/caract por refer. 
    int i;

    for(i=0; i < strlen(frase); i++){
        if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||(frase[i]=='u')){
			frase[i] = '*';
		}
    }
    printf("\n\nA frase criptografada: %s\n", frase);
}

int main(){
    
    char frase[80];

    printf("\tPrograma de criptografia de vogais\n\n");
    setbuf(stdin, NULL);
    printf("Digite uma frase: ");
    gets(frase);    //lembrar da funcao de pegar uma string e funcoes de manipulacao de string
    printf("voce digitou '%s'. Criptografando...\n", frase);  //lembrar do '\0' das strings pra fins de manipulacao no laço.
    func_Crip(frase);
    
    return 0;
}