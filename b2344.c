#include <stdio.h> 

int main () {
    short int nota;
    scanf ("%hd", &nota);
    
    char notaLetra = 'E';
    if (nota > 0 && nota < 36)
        notaLetra = 'D';
    if (nota >= 36 && nota < 61)
        notaLetra ='C';
    if (nota >= 61 && nota < 86)
        notaLetra ='B';
    if (nota >= 86 && nota <= 100)
        notaLetra='A';

    printf ("%c\n", notaLetra);
    return 0;
}