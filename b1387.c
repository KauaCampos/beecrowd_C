#include <stdio.h>

int main () {
    int x, y, z;    //z == soma
    while (1) {
        scanf ("%d %d", &x, &y);
        if (x == y && x == 0)
            return 0;

        z = x + y;
        printf ("%d\n", z);
    }
}