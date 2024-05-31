#include <stdio.h>
int main () {
    int x, soma;
    double cont, media;

    while (1) {
        scanf ("%d", &x);
        if (x <= 0)
            break;
        else {
            soma += x;
            cont ++;
        }
    }
    media = soma / cont;
    printf ("%.2f\n", media);

    return 0;
}