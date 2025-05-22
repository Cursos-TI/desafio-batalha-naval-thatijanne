#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][10];
   
    printf("***Jogo Batalha Naval***\n\n");
    printf("   ");
  
    for(int j = 0; j < 10; j++){
        printf("%c ", linha[j]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf(" %d ", i + 1);
        for (int j = 0; j < 10; j++){
            tabuleiro [i][j] = 0;
            printf("%d ", tabuleiro[i][j]);   
        } 
        printf("\n");
    }

    //Inserindo os Navios na Linha e Coluna
    
    printf("\n");
    printf("***Inserindo os navios horizontalmente e verticalmente***\n\n");

    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[1][4] = 3;
    tabuleiro[3][4] = 3;

     printf("   ");

    for(int j = 0; j < 10; j++){
        printf("%c ", linha[j]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf(" %d ", i + 1);
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);   
        } 
        printf("\n");
    }

    return 0;
}
