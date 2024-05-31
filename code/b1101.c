#include <stdio.h>
int main()
{
    int x, y, soma, aux;
    do
    {
        scanf("%d %d", &x, &y);
        if (x > 0 && y > 0)
        {

            if (x > y)
            {
                aux = x;
                x = y;
                y = aux;
            }

            soma = 0;

            while (x <= y)
            {
                printf("%d ", x);
                soma += x;
                x++;
            }

            printf("Sum=%d\n", soma);
        }
    } while (x > 0 && y > 0);

    return 0;
}