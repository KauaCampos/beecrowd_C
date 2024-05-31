#include <stdio.h>
#include <string.h>

int procurarCD (char* string);

int main () {
    int quantidade, vezesGanhadas = 0;
    scanf ("%d", &quantidade);
    getchar();

    char string [1001];
    for (int contador = 0; contador < quantidade; contador++) {
        fgets (string, 1000, stdin);
        vezesGanhadas += procurarCD (string);
    }

    printf ("%d\n", vezesGanhadas); 
    return 0;
}

int procurarCD (char* string) {
    int cont = strlen (string);
    for (int i = 0; i < cont; i++)
        if (string [i] == 'C')
            if (string [i + 1] == 'D')
                return 0;

    return 1;
}