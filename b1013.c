#include <stdio.h>
int main () {
    int x, y, z;
    scanf ("%d %d %d", &x, &y, &z);
    int aux, maior = x;
    if (maior < y) {
        aux = maior;
        maior = y;
        y = aux;
    }
    if (maior < z) {
        aux = maior;
        maior = z;
        z = aux;
    }
    printf ("%d eh o maior\n", maior);

    return 0;
}