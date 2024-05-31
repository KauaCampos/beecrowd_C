#include <stdio.h>

int carga ();
void scanV (int* n, int j);
void saidaV (int menorV, int menorP);

int main () {
    int indice = carga (), x [1000];
    int *v = x;
    
    scanV (v, indice);
    v = x;

    int menor = *v, menorPosicao = 0;
    for (int i = 1; i < indice; i++) {
        if (*(v + i) < menor) {
            menor = *(v + i);
            menorPosicao = i;
        }
    }
    saidaV (menor, menorPosicao);

    return 0;
}


int carga () {
    int n;
    scanf ("%d", &n);
    return n;
}

void scanV (int *n, int j) {
    for (int i = 0; i < j; i++) {
        scanf ("%d", (n + i));
    }
}

void saidaV (int menorV, int menorP) {
    printf ("Menor valor: %d\n", menorV);
    printf ("Posicao: %d\n", menorP);
}
