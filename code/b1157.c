#include <stdio.h>
int main ()
{
    int x, divisor = 0;
    scanf ("%d", &x);
    while (divisor != x) {
        divisor ++;
        if (x % divisor == 0)
            printf ("%d\n", divisor);
    }

    return 0;
}