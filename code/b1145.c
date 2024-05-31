#include <stdio.h>
int main () {
    int x, fatorial = 1;
    scanf ("%d", &x);
    for (int cont = 1; cont <= x; cont ++) {
        fatorial = fatorial * cont;
    }
    printf ("%d\n", fatorial);
    return 0;
}