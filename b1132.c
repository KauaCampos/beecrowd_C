#include <stdio.h>
int main () {
    int x, y, aux, soma = 0;
    scanf ("%d %d", &x, &y);

    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }

    while (x <= y) {
        if (x % 13 == 0) {
            x++;
            continue;
        }
        soma += x;
        x ++;
    }
    printf ("%d\n", soma);

    return 0;
}