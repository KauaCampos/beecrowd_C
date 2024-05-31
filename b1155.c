#include <stdio.h>

double soma () {
    double num = 0;
    for (double n = 1.0; n <= 100; n++) {
        num+= 1 / n;
    }

    return num;
}

int main () {
    double s = soma();
    printf ("%.2f\n", s);
    return 0;
}