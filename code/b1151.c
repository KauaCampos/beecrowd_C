#include <stdio.h>
int main () {
    int num;
    scanf ("%d", &num);
    int x = 0, y = 0, soma = x + y, z = 0;
    for (int cont = 1; cont <= num; cont ++, z++) {
        if (soma == z) {
            printf ("%d ", z);
        }
        x = y;
        y = z;
    }
    printf ("\n");

    return 0;
}