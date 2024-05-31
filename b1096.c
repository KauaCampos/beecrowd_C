#include <stdio.h>
int main () {
    int i = 1, j = 7;
    while (i <= 9) {
        if (j == i + 4) {
            i += 2;
            j += 4;
        }

        if (i > 9)
            break;

        printf ("I=%d J=%d\n", i, j);
        j--;
    }
    return 0;
}