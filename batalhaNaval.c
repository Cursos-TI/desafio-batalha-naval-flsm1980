#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Trabalho de Flávio Maia


int main() {

    // Nível Novato - Posicionamento dos Navios

    #define TAM_TABULEIRO 10
    #define TAM_NAVIO 3
    #define VALOR_AGUA 0
    #define VALOR_NAVIO 3

    // Criação do tabuleiro vazio

    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    for (int i = 0; i < TAM_TABULEIRO; i++)
    {
        for (int j = 0; j < TAM_TABULEIRO; j++)
        {
            tabuleiro [i][j] = VALOR_AGUA;
        }
    }

    // Definição coordenadas iniciais dos navios

    int linhaH = 8, colunaH = 6; // navio horizontal
    int linhaV = 3, colunaV = 5; // navio vertical

    // Verificando se o navio horizontal cabe no tabuleiro e não se sobrepõe ao outro

    int podeHorizontal = 1;
    if (colunaH + TAM_NAVIO <= TAM_TABULEIRO)
    {
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            if (tabuleiro[linhaH][colunaH + i] != VALOR_AGUA) {
                podeHorizontal = 0;
                break;
            }
        }
        
    } else {
        podeHorizontal = 0;
    }

    // posicionando navio horizontal
    if (podeHorizontal)
    {
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaH][colunaH +i] = VALOR_NAVIO;
        }
         
    } else{
        printf("Erro ao posicionar o navio horizontal\n");
        return 1;
    }

    // Verificação se o navio vertical cabe no tabuleiro e não sobrepõe outro

    int podeVertical = 1;
    if (linhaV + TAM_NAVIO <= TAM_TABULEIRO)
    {
        for (int i = 0; i < TAM_NAVIO; i++)
        {
           if (tabuleiro[linhaV +i][colunaV] != VALOR_AGUA)
           {
            podeVertical = 0;
            break;
           }
           
        }
        
    } else {
        podeVertical = 0;
    }

    // Posicionando navio vertical

    if (podeVertical)
    {
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaV + i][colunaV] = VALOR_NAVIO;
        }
        
    } else {
        printf("Erro ao posicionar o navio vertical\n");
        return 1;
    }

    // Exibição do tabuleiro final

    printf("*** TABULEIRO DE BATALHA NAVAL ***\n");
    for (int i = 0; i < TAM_TABULEIRO; i++)
    {
        for (int j = 0; j < TAM_TABULEIRO; j++)
        {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }


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

    return 0;
}
