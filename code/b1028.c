#include <stdio.h>
int main () {
    int cont, x, y, divisor, aux;
    scanf ("%d", &cont);
    for (; cont > 0; cont --) {
        scanf ("%d %d", &x, &y);

        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }

        for (divisor = y / 2; divisor > 0; divisor--) {
            if (x % divisor == 0 && y % divisor == 0) {
                printf ("%d\n", divisor);
                break;
            }
        }
    }
    return 0;
}