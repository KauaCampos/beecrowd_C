#include <stdio.h>

#define NUM 20

void saida (int n [NUM]);

int main () {
    int N [NUM];
    
    for (int i = 0; i < NUM; i++) 
        scanf ("%d", &N [i]);

    for (int i = 0, j = NUM - 1, aux; i < j; i++, j --) {
        aux = N [i];
        N [i] = N [j];
        N [j] = aux;
    }

    saida (N);

    return 0;
}

void saida (int n [NUM]) {
    for (int i = 0; i < NUM; i ++) 
        printf ("N[%d] = %d\n", i, n [i]);
}