#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Aluno: Djhonathan Paiva, GRR: 20182753
TE353 - Programação Orientada a Objetos - Exercício 6 - Jogo da velha
Compilando no VSCode  - Tecla F6
Compilando no DEV-C++ - Tecla F11
*/

    //definições globais.
char jogo[3][3];    // define uma matriz de ordem 3x3, que no próximo passo futuro será preenchida primeiramente com espaços.
char jogador1[] = "Jogador A";
char jogador2[] = "Jogador B";    // define o nome dos jogadores 1 e 2.

    //declaração das funções do programa.
void matriz_inicio();
int valida_preenchimento(char simbolo);
int valida_coordenada(int x, int y);
int casa_vazia(int x, int y);
int ganhou_linhas();
int ganhou_colunas();
int ganhou_diagPrincipal();
int ganhou_diagSecundaria();
void imprimir();
void jogar();

int main(){
    
    int op; // variável para escolher uma opção

    printf("\t\tJogo da Velha\n");
    do{
        matriz_inicio();
        jogar();
        printf("\n\tDeseja jogar novamente?\n");
        printf("\t1. Sim\n\t2. Nao\n");
        scanf("%d", &op);
    }while(op == 1);
    printf("\nFechando o jogo...\n");
    return 0;
}

void matriz_inicio(){   // preenche uma matriz 3x3 com espaços/vazio.
    int i,j;
    
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            jogo[i][j] = ' ';
        }
    }
}

int valida_preenchimento(char simbolo){ //  função retorna verdadeiro se as posições passadas por uma das 4 funções de "ganhou_" for um dos dois símbolos, 'x' ou '0'.
    
    if(simbolo == 'x' || simbolo == '0')
        return 1;
    else
        return 0;
}

int valida_coordenada(int x, int y){    // essa validação é pra verificar se a coordenada escolhida está, primeiramente, dentro do tabuleiro 3x3.
    
    if(x >= 0 && x < 3){
        if(y >= 0 && y < 3)
            return 1;
    }
    return 0;
}

int casa_vazia(int x, int y){   // já, essa função, é pra verificar se a casa está preenchida ou está vazia
    
    if(jogo[x][y] != 'x' && jogo[x][y] != '0')
        return 1;   // advindo da função matriz_inicio(), o símbolo ' ' de espaço é o que preenche/esvazia a casa.
    printf("Casa ja preenchida! Escolha outra para continuar o jogo.");
    return 0;
}

int ganhou_linhas(){    // valida o tabuleiro com critério de preenchimento de linha.
    int i, j, igual = 1;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            if(valida_preenchimento(jogo[i][j]) && jogo[i][j] == jogo[i][j+1])  // valida_preenchimento() tem que retornar verdadeiro para calcular se ganhou por linhas.
                igual++;
        }
        if(igual == 3)  // se a variável "igual" incrementar 3 vezes durante o laço de repetição, quer dizer que uma linha já foi preenchida com símbolos e iguais e algum jogador ganhou por esse modo.
            return 1;
        igual = 1;  // se "igual" não incrementar NO MÍNIMO 3 vezes (total de vezes para ganhar por esse modo), ele volta a ser 1.
    }
    return 0;
}

int ganhou_colunas(){   // valida o tabuleiro com critério de preenchimento de coluna.
    int i, j, igual = 1;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            if(valida_preenchimento(jogo[j][i]) && jogo[j][i] == jogo[j+1][i]) // mesma lógica da função ganhou_linhas(), só que agora o que vão ser analisadas são as colunas. (jogo[j+1][i])
                igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;
}

int ganhou_diagPrincipal(){     // valida o tabuleiro com critério de preenchimento da diagonal principal da matriz 3x3.
    int i, igual = 1;
    
    for(i = 0; i < 2; i++){
        if(valida_preenchimento(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

int ganhou_diagSecundaria(){    // valida o tabuleiro com critério de preenchimento da diagonal secundária da matriz 3x3.
    int i, igual = 1;
    
    for(i = 0; i < 2; i++){
        if(valida_preenchimento(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

void imprimir(){
    int lin, col;   
    
    printf("\n\t    0  1  2\n");    // coordenadas para se localizar na hora do jogo. Espaços fazem parte da impressão para, visualmente, ficar bem apresentável o tabuleiro.
    for(lin = 0; lin < 3; lin++){
        printf("\t%d ", lin);
        for(col = 0; col < 3; col++){
            if(col < 2)
                printf(" %c |", jogo[lin][col]);
            else
                printf(" %c ", jogo[lin][col]);
        }
        if(lin < 2)
            printf("\n\t   ---------\n");
    }
}

void jogar(){
    int x, y, valida;
    int jogadas = 0, ganhou = 0, ordem = 1;
    char vez[20];
    do{
        do{
            imprimir();
            if(ordem == 1)
            	strcpy(vez, jogador1);    //vez = jogador1; //  printf("a vez eh do: %c", vez);
            else
            	strcpy(vez, jogador2);    //vez = jogador2; //  printf("a vez eh do: %c", vez);
            
            printf("\n\nVez de %s", vez); // se baseando na função imprimir(), há uma impressão com objetivo de localizar o jogador no prompt.
            printf("\nLinha: ");
            scanf("%d", &x);
            printf("\nColuna: ");
            scanf("%d", &y);
            valida = valida_coordenada(x, y);
            if(valida == 1)
                valida = valida + casa_vazia(x, y);    //  valida += casa_vazia(x, y);
        }while(valida != 2);

        if(ordem == 1)
            jogo[x][y] = 'x';   // ordem recebe o valor 1 no início da função.
        else
            jogo[x][y] = '0';   // caso ordem valha 2, o Jogador B jogará com o símbolo '0'.
        jogadas++;
        ordem++;
        if(ordem == 3)  // quando ordem valer 3, volta a valer 1. Ordem sempre vai ser ou 1 ou 2 para fins de controle, simplicidade e preenchimento dos símbolos 'x' ou '0'. 
            ordem = 1;
        ganhou += ganhou_linhas();   // verificações pra ver se algum jogador ganhou por linhas, colunas, pela diagonal principal ou pela diagonal secundária.
        ganhou += ganhou_colunas();
        ganhou += ganhou_diagPrincipal();
        ganhou += ganhou_diagSecundaria();
    }while(ganhou == 0 && jogadas < 9);    // lógica AND pois ambas as condições têm que ser cumpridas: "ganhou" tem que ser igual a 0 e não pode ultrapassar o limite de "jogadas", que é 9.
    if(ganhou != 0){    // se o jogo terminar, vai verificar se a ordem terminou em 1 ou em 2. Se "ordem - 1 == 1", quer dizer que a última jogada foi do "Jogador B", sendo o "Jogador A" o vencedor do jogo.
        imprimir();
        if(ordem - 1 == 1)  // condição com intenção de verificar quem foi o último a jogar para finalizar e parabenizar.
            printf("\nParabens! %s venceu.\n", jogador1);
        else
            printf("\nParabens! %s venceu\n", jogador2);
    } else
        printf("\nDeu velha. Ninguem venceu!\n\n");
}