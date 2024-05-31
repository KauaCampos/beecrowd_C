#include <stdio.h>

#define NUM 10

void saida (int n []) {
    for (int i = 0; i < NUM; i ++) 
        printf ("N[%d] = %d\n", i, n [i]);
}

int main () {
    int N [10];
    scanf ("%d", &N [0]);
    for (int i = 1; i < NUM; i++) 
        N [i] = N [i - 1] * 2;
    saida (N);
    return 0;
}