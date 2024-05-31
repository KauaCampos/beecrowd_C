#include <stdio.h>

#define NUM 100

void construirMatriz (int ordemMatriz);
void saida (int m [NUM] [NUM], int ordem);

int main() {
    int ordem;
    while (1) {
        scanf("%d", &ordem);
        if (ordem == 0)
            break;
        construirMatriz(ordem);
    }
    
    return 0;
}

void construirMatriz(int ordemMatriz) {
    int matriz [NUM] [NUM], menorIndice;
    
    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            // Calcular a ultima posicao da matriz
            if (i < ordemMatriz - i - 1)
                menorIndice = i;
            else
                menorIndice = ordemMatriz - i - 1;
            
            if (j < ordemMatriz - j - 1 && j < menorIndice)
                menorIndice = j;
            else 
                if (ordemMatriz - j - 1 < menorIndice)
                    menorIndice = ordemMatriz - j - 1;
            
            // Definir o valor da posicao com base no menor índice
            matriz[i][j] = menorIndice + 1;
        }
    }
    
    saida (matriz, ordemMatriz);
}

void saida (int m [NUM] [NUM], int ordem) {
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%3d", m [i][j]);
            if (j < ordem - 1)
                putchar (' ');
        }
        printf("\n");
    }
    
    printf("\n"); 
}