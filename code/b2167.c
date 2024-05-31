#include <stdio.h>

void iniciar (int* ptr, int quant);
int posicaoQueda (int* ptr, int quant);
int quedaIgual0 (int quedaP);
void saida (int quedas);

int main () {
    int velocidade [100], quant;
    scanf ("%d", &quant);
    int* ptr = velocidade;
    iniciar (ptr, quant);
    ptr = velocidade;
    int quedaP = posicaoQueda (ptr, quant);
    saida (quedaP);
    return 0;
}

void iniciar (int* ptr, int quant) {
    for (int i = 0; i < quant; i++, ptr++)
        scanf ("%d", ptr);
}

int posicaoQueda (int* ptr, int quant) {
    int quedaP = 0;
    ptr++;
    for (int i = 1; i < quant; i++, ptr++) 
        if (*ptr < *(ptr - 1)) {
            quedaP = i;
            break;
        }
    return quedaIgual0 (quedaP);
}

int quedaIgual0 (int quedaP) {
    if (quedaP == 0)
        return quedaP;
    return quedaP + 1;
}

void saida (int queda) {
    printf ("%d\n", queda);
}