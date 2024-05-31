#include <stdio.h>

#define NUM 12

void soma (int num, double s [] [NUM]);
void media (int num, double s [] [NUM]);

int main () {
    double N [NUM] [NUM];

    int coluna;
    scanf ("%d", &coluna);
    char c;
    scanf (" %c", &c);

    for (int i = 0, j = 0; i < NUM; j++) {
        if (j == 12) {
            j = 0;
            i ++;
        }
        scanf ("%lf", &N [i] [j]);
    }

    if (c == 'S')
        soma (coluna, N);
    else
        media (coluna, N);
    return 0;
}

void soma (int num, double s [] [NUM]) {
    double soma = 0;
    for (int i = 0; i < NUM; i++) 
        soma += s [i] [num];
    printf ("%.1f\n", soma);
}

void media (int num, double s [] [NUM]) {
    double media = 0;
    for (int i = 0; i < NUM; i++) 
        media += s [i] [num];
    media = media / NUM;
    printf ("%.1f\n", media);
}