#include <stdio.h>

#define NUM 1000

void saida (int n [NUM]);

int main () {
    int limite, N [NUM], valor = 0;
    scanf ("%d", &limite);

    for (int i = 0; i < NUM; i ++, valor ++) {
        if (valor == limite)
            valor = 0;
        N [i] = valor;
    }

    saida (N);

    return 0;
}

void saida (int n [NUM]) {
    for (int i = 0; i < NUM; i++) 
        printf ("N[%d] = %d\n", i, n [i]);
}