#include <stdio.h>
int main ()
{
    int contador, x, intervalo, foraintervalo = 0;
    scanf ("%d", &contador);
    do {
        scanf ("%d", &x);
        if (x >= 10 && x <= 20)
            intervalo ++;
        else 
            foraintervalo ++;
        contador --;
    }
    while (contador > 0);
    
    printf ("%d in\n%d out\n",intervalo, foraintervalo);

    return 0;
}