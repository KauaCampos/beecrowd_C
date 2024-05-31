#include <stdio.h>

void print_saida (int n) {
    for (int x = 1; x <= n; x++) {
        int y = x * x, z = y * x;
        printf ("%d %d %d\n", x, y, z);

        y ++;
        z ++;
        printf ("%d %d %d\n", x, y, z);
    }

}

int main () {
    int num;
    scanf ("%d", &num);
    print_saida (num);
    return 0;
}