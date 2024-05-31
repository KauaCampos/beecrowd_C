#include <stdio.h>

#define NUM 100

void saida (double n [NUM]);

int main () {
    double N [NUM];
    scanf ("%lf", &N [0]);

    for (int i = 1; i < NUM; i ++) 
        N [i] = N [i - 1] / 2;
    
    saida (N);

    return 0;
}

void saida (double n [NUM]) {
    for (int i = 0; i < NUM; i++)
        printf ("N[%d] = %.4f\n", i, n [i]);
}