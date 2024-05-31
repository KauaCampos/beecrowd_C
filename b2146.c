#include <stdio.h>

int subtracao (int x);
void saida (int z);

int main () {
    int x;
    while (scanf ("%d", &x) != EOF) {
        saida (subtracao (x));
    }

    return 0;
}

int subtracao (int x) {
    int y = x - 1;
    return y;
}

void saida (int z) {
    printf ("%d\n", z);
}