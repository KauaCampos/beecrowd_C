#include <stdio.h>
int main ()
{
    int n1, n2, n3, n4, n5, pares;
    scanf ("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    pares = (n1 % 2 == 0) + (n2 % 2 == 0) + (n3 % 2 == 0) + (n4 % 2 == 0) + (n5 % 2 == 0);
    printf ("%d valores pares\n", pares);
    return 0;
}