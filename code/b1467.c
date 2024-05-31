#include <stdio.h>
int main () {
    int A, B, C, soma;
    while ((scanf ("%d %d %d", &A, &B, &C)) != EOF) {
        soma = A + B + C;
        if (soma == 3 || soma == 0)
            puts ("*");
        else {
            if (soma == 2) {
                if (A == 0)
                    puts ("A");
                else 
                    if (B == 0)
                        puts ("B");
                    else 
                        puts ("C");
            }
            else {
                if (A == 1)
                    puts ("A");
                else 
                    if (B == 1)
                        puts ("B");
                    else 
                        puts ("C");
            }
        }    

    }
    return 0;
}