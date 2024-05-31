#include <stdio.h>

#define NUM 10

int main() {
    int X[NUM];

    for (int i = 0; i < NUM; i++) {
        scanf("%d", &X[i]);

        if (X [i] <= 0)
            X [i] = 1;
            
        printf ("X[%d] = %d\n", i, X [i]); 
    }

    return 0;
}