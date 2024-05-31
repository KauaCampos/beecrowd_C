#include <stdio.h>

#define NUM 100

int main () {
    double X [NUM];
    for (int i = 0; i < NUM; i ++) {
        scanf ("%lf", &X [i]);
        if (X [i] <= 10)
            printf ("A[%d] = %.1f\n", i, X [i]);
    }
    return 0;
}