/*BATALHA NAVAL
(Tema 5/desafio 1) - Criar o tabuleiro utilizando uma matriz 10x10, usando 0 para representar a água e 3 para representar os návios, e imprimir o tabuleiro.
(Tema 5/desafio 2) - Posicionar 4 navios com tamanho de 3 casas, sendo 2 na diagonal, sem que um cruze o outro. Imprimir o tabuleiro no final.
(Tema 5/desafio 3) - criar matrizes que representem habilidades especiais para o jogo, em diferentes formatos, e imprimir as mesmas no tabuleiro final.
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*#include <stdio.h>

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
    }

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
}*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//(TEMA 5/desafio 3) - Tentei nessa fase trabalhar com constantes e funções, pro código main ficar mais clean.

#include <stdio.h>
#include <stdlib.h>

#define TAM_TAB 10 //Constante para tamanho do tabuleiro
#define TAM_HAB 5 //Constante para tamanho da habilidade

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) { //tabuleiro 10x10
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro com símbolos, para ficar mais dinâmico
void exibirTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    printf("\nTabuleiro:\n\n");
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            if (tabuleiro[i][j] == 0) //Se 'agua'(0), printará o ~
                printf("~ ");
            else if (tabuleiro[i][j] == 3)//Se navio (3), printará o N
                printf("N ");
            else if (tabuleiro[i][j] == 5)//Se habilidade (5), printará o *
                printf("* ");
        }
        printf("\n");
    }
}
//POSICIONANDO OS NAVIOS NO TABULEIRO:

// Função para posicionar navio horizontal
void posicionarNavioHorizontal(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }
}

// Função para posicionar navio vertical
void posicionarNavioVertical(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }
}

// Função para posicionar navio diagonal principal
void posicionarNavioDiagonalPrincipal(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna + i] = 3;
    }
}

// Função para posicionar navio diagonal secundária
void posicionarNavioDiagonalSecundaria(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna - i] = 3;
    }
}

//POSICIONANDO AS HABILIDADES NO TABULEIRO:

// Função para construir matriz de habilidade em forma de cone
void construirCone(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (j >= TAM_HAB / 2 - i && j <= TAM_HAB / 2 + i)
                matriz[i][j] = 1; //marcando 1 nas posições que formam o cone
            else
                matriz[i][j] = 0; // marcando 0 nos arredores do cone
        }
    }
}

// Função para construir matriz de habilidade em forma de cruz
void construirCruz(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == TAM_HAB / 2 || j == TAM_HAB / 2) //Se i ou J forem iguais a metade do tamanho da habilidade
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para construir matriz de habilidade em forma de octaedro (losango)
void construirOctaedro(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= TAM_HAB / 2) //ABS tem a função de encontrar o centro entre dois elementos, para definir o centro do losango
                matriz[i][j] = 1;                                           //e somar as duas distâncias até o centro.
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para aplicar matriz de habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[TAM_TAB][TAM_TAB], int matriz[TAM_HAB][TAM_HAB], int origemLinha, int origemColuna) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int linhaTab = origemLinha - TAM_HAB / 2 + i; // serve para "centralizar" a matriz da habilidade no ponto de origem.
            int colunaTab = origemColuna - TAM_HAB / 2 + j;

            if (linhaTab >= 0 && linhaTab < TAM_TAB && colunaTab >= 0 && colunaTab < TAM_TAB) { //Verificando se a posição calculada está dentro dos limites do tabuleiro
                if (matriz[i][j] == 1 && tabuleiro[linhaTab][colunaTab] != 3) { //So aplica a habilidade se não hover navio (3) no local.
                    tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM_TAB][TAM_TAB];
    inicializarTabuleiro(tabuleiro);

    // Posiciona 4 navios
    posicionarNavioHorizontal(tabuleiro, 1, 2); //[i][j]
    posicionarNavioVertical(tabuleiro, 4, 6);
    posicionarNavioDiagonalPrincipal(tabuleiro, 0, 7);
    posicionarNavioDiagonalSecundaria(tabuleiro, 6, 9);

    // Matrizes de habilidades
    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    construirCone(cone);
    construirCruz(cruz);
    construirOctaedro(octaedro);

    // Aplica habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 2, 2);
    aplicarHabilidade(tabuleiro, cruz, 5, 5);
    aplicarHabilidade(tabuleiro, octaedro, 7, 3);

    // Exibe tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
/*
~ = água (0)

N = navio (3)

* = área afetada por habilidade (5)

*/


