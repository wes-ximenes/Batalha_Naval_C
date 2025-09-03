/*BATALHA NAVAL
(Tema 5/desafio 1) - Criar o tabuleiro utilizando uma matriz 10x10, usando 0 para representar a água e 3 para representar os návios, e imprimir o tabuleiro.
(Tema 5/desafio 2) - Posicionar 4 navios com tamanho de 3 casas, sendo 2 na diagonal, sem que um cruze o outro. Imprimir o tabuleiro no final.
*/

#include <stdio.h>

int main() { 
    
    //  (TEMA 5/desafio1)
    /*
    // Tamanho fixo do tabuleiro e dos navios
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;

    // Valor para água e navio
    int agua = 0;
    int navio = 3;

    // Matriz representando o tabuleiro
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água, definindo os zeros como água.
    for (int linha = 0; linha < tamanhoTabuleiro; linha++) {
        for (int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
            tabuleiro[linha][coluna] = agua;
        }
    }

    // Coordenadas iniciais dos navios, pré-definidas no código:
    int linhaNavioH = 2;
    int colunaNavioH = 4;

    int linhaNavioV = 5;
    int colunaNavioV = 7;

    // Verifica se os navios cabem no tabuleiro, para retornar um erro se sair dos limites do tabuleiro.
    if (colunaNavioH + tamanhoNavio <= tamanhoTabuleiro &&
        linhaNavioV + tamanhoNavio <= tamanhoTabuleiro) { // Se o tamanho do navio em coluna/linha for menor ou igual ao tamanho do tabuleiro

        // Posiciona navio horizontal
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavioH][colunaNavioH + i] = navio;
        }

        // Posiciona navio vertical com verificação de sobreposição
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaNavioV + i][colunaNavioV] == navio) {
                printf("Erro: os navios estão se sobrepondo!\n"); //tratando, para se caso os navios se cruzarem.
                return 1;
            }
            tabuleiro[linhaNavioV + i][colunaNavioV] = navio;
        }

        // Exibe o tabuleiro
        printf("Tabuleiro Batalha Naval:\n\n");
        for (int linha = 0; linha < tamanhoTabuleiro; linha++) { //percorrendo o tabuleiro com FOR ANINHADO, para contabilizar 1 linha, ele exibe 10 colunas.
            for (int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
                printf("%d ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }

    } else {
        printf("Erro: coordenadas inválidas para posicionar os navios.\n"); //tratando para se caso as coordenadas não baterem com a do tabuleiro.
    }*/

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //(TEMA 5/desafio 2)
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;
    int agua = 0;
    int navio = 3;

    // Matriz representando o tabuleiro
    int tabuleiro[10][10];

    // Definindo a água
    for (int linha = 0; linha < tamanhoTabuleiro; linha++) {
        for (int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
            tabuleiro[linha][coluna] = agua;
        }
    }

    // POSICIONANDO OS NAVIOS

    // Navio 1 - Horizontal (linha fixa, coluna crescente)
    int linhaH = 1;
    int colunaH = 2;
    if (colunaH + tamanhoNavio <= tamanhoTabuleiro) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaH][colunaH + i] = navio;
            //O primeiro não precisa tratar sobreposição, pois ainda não foi posto nenhum navio no tabuleiro.
        }
    }

    // Navio 2 - Vertical (coluna fixa, linha crescente)
    int linhaV = 4;
    int colunaV = 6;
    if (linhaV + tamanhoNavio <= tamanhoTabuleiro) {
        for (int i = 0; i < tamanhoNavio; i++) {
            // Verificar se tem sobreposição
            if (tabuleiro[linhaV + i][colunaV] == navio) { //tratando para se caso algum navio cruze com outro
                printf("Erro: sobreposição detectada no navio vertical.\n");
                return 1;
            }
            tabuleiro[linhaV + i][colunaV] = navio; // posicionando o navio
        }
    }

    // Navio 3 - Diagonal principal (linha e coluna crescem juntas)
    int linhaT = 2;
    int colunaT = 2;
    if (linhaT + tamanhoNavio <= tamanhoTabuleiro && colunaT + tamanhoNavio <= tamanhoTabuleiro) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaT + i][colunaT + i] == navio) {
                printf("Erro: sobreposição detectada no navio diagonal principal.\n"); // tratando cruzamento
                return 1;
            }
            tabuleiro[linhaT + i][colunaT + i] = navio; //posicionando o navio
        }
    }

    // Navio 4 - Diagonal contrária (linha cresce, coluna decresce)
    int linhaM = 6;
    int colunaM = 9;
    if (linhaM + tamanhoNavio <= tamanhoTabuleiro && colunaM - tamanhoNavio + 1 >= 0) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaM + i][colunaM - i] == navio) {
                printf("Erro: sobreposição detectada no navio diagonal secundária.\n"); // tratando cruzamento de navios
                return 1;
            }
            tabuleiro[linhaM + i][colunaM - i] = navio; // posicionando o navio
        }
    }

    
    // MOSTRANDO O TABULEIRO:

    printf("\nTabuleiro Batalha Naval:\n\n");
    for (int linha = 0; linha < tamanhoTabuleiro; linha++) {
        for (int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n"); //Para pular a linha assim que tiver quebra de linha
    }

    return 0;
}

