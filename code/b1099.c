#include <stdio.h>
int main()
{
    int x, y, soma = 0, aux, cont;
    scanf("%d", &cont);
    for (; cont > 0; cont--)
    {
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        if (x % 2 == 0)
            x += 1;
        else
            x += 2;

        while (x < y)
        {
            soma += x;
            x += 2;
        }

        printf("%d\n", soma);
    }
    return 0;
}