/*BATALHA NAVAL
(Tema 5/desafio 1) - Criar o tabuleiro utilizando uma matriz 10x10, usando 0 para representar a água e 3 para representar os návios, e imprimir o tabuleiro.
*/

#include <stdio.h>

int main() { //  (Tema 5/desafio1)
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
    }

    return 0;
}

