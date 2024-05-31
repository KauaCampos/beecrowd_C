#include <stdio.h>
#include <math.h>

int main () {
    double a, b, c;
    scanf ("%lf %lf %lf", &a, &b, &c);

    double delta = (b*b) -4 * a * c;
    double r1 = (-b + sqrt (delta)) / (2 * a);
    double r2 = (-b - sqrt (delta)) / (2 * a);

    if (2 * a == 0 || delta < 0)
        printf ("Impossivel calcular\n");
    else
        printf ("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    return 0;
}