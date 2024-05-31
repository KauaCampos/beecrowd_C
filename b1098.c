#include <stdio.h>

int main() {
    for (double i = 0; i <= 2.2; i += 0.2)
        for (double j = i + 1; j <= i + 3; j++) {
            if (i - (int)i == 0 || j - (int)j == 0)
                printf("I=%d J=%d\n", (int)i, (int)j);
            else
                printf("I=%.1f J=%.1f\n", i, j);
        }
    return 0;
}