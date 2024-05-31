#include <stdio.h>
int main ()
{
    int x, y;
    do {
        scanf ("%d %d", &x, &y);
        if (x > y)
            printf ("Decrescente\n");
        if (x < y)
            printf ("Crescente\n");
    }
    while (x != y);
    return 0;
}