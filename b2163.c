#include <stdio.h>

#define NUM 1000

void inicializarM (int t [NUM] [NUM], int l, int c);
void verificarSabrePosicao (int t [NUM] [NUM], int l, int c);
void saida (int posicaoC, int posicaoL);

int main () {
    int tabela [NUM] [NUM], linhas, colunas;
    scanf ("%d %d", &linhas, &colunas);

    inicializarM (tabela, linhas, colunas);

    verificarSabrePosicao (tabela, linhas, colunas);
    return 0;
}

void inicializarM (int t [NUM] [NUM], int l, int c) {
    for (int i = 0; i < l; i ++) 
        for (int j = 0; j < c; j++)
            scanf ("%d", &t [i] [j]);
}

void verificarSabrePosicao (int t [NUM] [NUM], int l, int c) {
    int posicaoL, posicaoC; //lado
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (t [i] [j] != 42)
                continue;
            else {
                if (t [i - 1] [j - 1] == 7 && t [i - 1] [j] == 7 && t [i - 1] [j + 1] == 7) 
                    if (t [i] [j - 1] == 7 && t [i] [j + 1] == 7) 
                        if (t [i + 1] [j - 1] == 7 && t [i + 1] [j] == 7 && t [i + 1] [j + 1] == 7) {
                            posicaoL = i + 1;
                            posicaoC = j + i;
                        }
            }
        }
    }
    saida (posicaoC, posicaoL);
}

void saida (int posicaoC, int posicaoL) {
    printf ("%d %d\n", posicaoL, posicaoC);
}