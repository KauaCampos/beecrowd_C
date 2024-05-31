#include <stdio.h>
int main ()
{
    double A, B, C, aux, SomaSquare, ASquare;
    scanf ("%lf %lf %lf", &A, &B, &C);
    
    if (A < B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if (A < C)
    {
        aux = A;
        A = C;
        C = aux;
    }
    if (B < C)
    {
        aux = B;
        B = C;
        C = aux;
    }
    
    SomaSquare = (B * B) + (C * C);
    ASquare = A * A;

    if (A >= B + C)
        printf ("NAO FORMA TRIANGULO\n");
    else
        {   
            if (ASquare == SomaSquare)
                printf ("TRIANGULO RETANGULO\n");

            if (ASquare > SomaSquare)
                printf ("TRIANGULO OBTUSANGULO\n");

            if (ASquare < SomaSquare)
                printf ("TRIANGULO ACUTANGULO\n");
            
            if (A == B && B == C)
                printf ("TRIANGULO EQUILATERO\n");
            
            else
                if (A == B || B == C || C == A)
                    printf ("TRIANGULO ISOSCELES\n");
        }
    return 0;
}