#include <stdio.h>
#include <stdlib.h>

void inicializarV (int* vetor, int carga);

int main () {
    int carga, *vetor;
    scanf ("%d", &carga);
    vetor = (int*) malloc (sizeof (int) * carga);
    inicializarV (vetor, carga);

    int quant0 = 0, quant1 = 0;
    for (int i = 0; i < carga; i++) {
        if (vetor [i] == 0) {
            quant0++;
            continue;
        }
        quant1++;
    }

    if (quant0 > quant1)
        puts ("Y");
    else
        puts ("N");

    return 0;
}

void inicializarV (int* vetor, int carga) {
    for (int i = 0; i < carga; i++)
        scanf ("%d", &vetor [i]);
}