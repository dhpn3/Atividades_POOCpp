#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <string.h>
/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos - Lista 2 - Estruturas (Structs)
Compilando no VSCode  - Tecla F6
Compilando no DEV-C++ - Tecla F11
*/

/*FALTA TERMINAR*/

int menuBanco(){

    int menu;
    
    printf("\n\t\tMenu\n\n");
    printf("\tO que voce deseja fazer?\n");
    printf("\t1.  Cadastrar conta\n");
    printf("\t2.  Visualizar todas as contas de um determinado cliente\n");
    printf("\t3.  Excluir a conta com menor saldo\n");  //(supondo a não existência de saldo iguais)
    printf("\t4.  Sair\n");
    return(scanf("%d", &menu));
}

void cadastro(conta){

    printf("Digite um numero pra sua conta: ");
    scanf("%d", &conta.numeroConta);

}

struct contaBancaria{
    int numeroConta; // tem que ser único
    char nomeCliente[50];   // 1 cliente pode ter + que 1 conta
    float saldo;
};

int main(){
    
    struct contaBancaria conta[15];
    int op, menu;
    
    printf("\tBem-vindo ao banco X!\n");
    do{
        printf("\n\t\tDeseja fazer uma operacao?\n");
        printf("\t1.  Sim\n\t2.  Nao\n");
        scanf("%d", &op);
        // printf("\tAbrindo menu...\n");
        menu = menuBanco();
        
        switch (menu){
            case 1:
                printf("\nCadastrando conta\n");
                cadastro(conta);
                break;
            case 2:
                printf("\tVisualizando todas as contas de um determinado cliente...\n");
                break;
            case 3:
                printf("\tExcluindo a conta com menor saldo...\n");
                break;
            case 4:
                printf("\tSaindo\n");
                break;
        default:
            break;
        }
    } while (op == 1);
    printf("Saindo...\n");

    return 0;
}