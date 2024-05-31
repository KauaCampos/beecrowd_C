#include <stdio.h>

double somaProg () {
    double nota1, nota2;
    while (1) {
        scanf ("%lf", &nota1);
        if (nota1 < 0 || nota1 > 10) {
            puts ("nota invalida");
            continue;
        }
    }

    while (1) {
        scanf ("%lf", &nota2);
        if (nota2 < 0 || nota2 > 10) {
            puts ("nota invalida");
            continue;
        }
    }
    return nota1 + nota2;
}

int novoCalculo () {
    int x;
    while (1) {
        puts ("novo calculo (1-sim 2-nao)");
        scanf ("%d", &x);
        if (x != 1 && x != 2)
            continue;
    }
    return x;
}

int main () {
    double media;
    int continuar = 0;
    while (continuar != 2) {
        media = somaProg () / 2;
        printf("media = %.2f\n", media);
        continuar = novoCalculo ();
    }
    
    return 0;
}