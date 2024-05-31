#include <stdio.h>
int main ()
{
    int x, multiplicador = 0, resultado;
    scanf ("%d", &x);
    while (multiplicador < 10) {
        multiplicador ++;
        resultado = x * multiplicador;
        printf ("%d x %d = %d\n", multiplicador, x, resultado);
    }

    return 0;
}