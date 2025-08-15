#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Trabalho de Flávio Maia


int main() {

    // Nível Novato - Posicionamento dos Navios

    int tamanhoTabuleiro = 10;
    // int tamanhoNavio = 3;
    // int valorAgua = 0;
    // int valorNavio = 3;

    // Criação do tabuleiro vazio

    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro [i][j] = 0;
        }
    }

    // Definição coordenadas iniciais dos navios

    int linhaH = 8, colunaH = 6; // navio horizontal
    int linhaV = 3, colunaV = 5; // navio vertical

    // Verificando se o navio horizontal cabe no tabuleiro e não se sobrepõe ao outro

    int podeHorizontal = 1;
    if (colunaH + 3 <= 10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
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
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaH][colunaH +i] = 3;
        }
         
    } else{
        printf("Erro ao posicionar o navio horizontal\n");
        return 1;
    }

    // Verificação se o navio vertical cabe no tabuleiro e não sobrepõe outro

    int podeVertical = 1;
    if (linhaV + 3 <= 10)
    {
        for (int i = 0; i < 3; i++)
        {
           if (tabuleiro[linhaV +i][colunaV] != 0)
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
        for (int i = 0; i < 10; i++)
        {
            tabuleiro[linhaV + i][colunaV] = 3;
        }
        
    } else {
        printf("Erro ao posicionar o navio vertical\n");
        return 1;
    }

    // Exibição do tabuleiro final

    printf("*** TABULEIRO DE BATALHA NAVAL ***\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
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
