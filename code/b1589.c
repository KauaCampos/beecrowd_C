#include <stdio.h>

void entrada (int x [3]);
void saida (int x [3]);

int main () {
    int cont, num [3];
    scanf ("%d", &cont);
    for (int x = 0; x < cont; x++) {
        entrada (num);
        saida (num);
    }
    return 0;
}

void entrada (int x [3]) {
    scanf ("%d %d", &x [0], &x [1]);
}

void saida (int x [3]) {
    x [2] = x [0] + x [1];
    printf ("%d\n", x[2]);
}