#include <stdio.h>
int main()
{
    int x , contador = 1;
    scanf("%d", &x);
    if (x % 2 == 0)
        x++;

    while (contador <= 6)
    {
        contador ++;
        printf("%d\n", x);
        x += 2;
    }

    return 0;
}