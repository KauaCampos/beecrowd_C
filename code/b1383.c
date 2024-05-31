#include <stdio.h>
#define NUM 81

void inicializarM (int* ptr);
int testarLinha (int* ptr);
int somaLinha (int* ptr);
int diferencaLinha (int* ptr, int j);

int main () {
    int cont, matriz [NUM];
    int* ptr = matriz;
    scanf ("%d", &cont);
    for (int x = 1; x <= cont; x++) {
        inicializarM (ptr);
        ptr = matriz;

        printf ("Instancia %d\n", x);
        if (testarLinha (ptr) == NUM)
            puts ("SIM");
        else
            puts ("NAO");
    }
    return 0;
}

void inicializarM (int* ptr) {
    for (int i = 0; i < NUM; i++, ptr++)
        scanf ("%d", ptr);
}

int testarLinha (int* ptr) {
    int aux = 0, soma, diferenca;
    for (int i = 0; i < 9; i++) {
        if (i == 0)
            ptr = ptr + (i * 9);
        else
            ptr = ptr + (i * 9 - 1);
        soma = somaLinha (ptr);
        if (soma != 45) 
            break;

        for (int j = 0; j < 9; j++, ptr++) {
            if (*ptr > 0 && *ptr < 10) {
                    diferenca = diferencaLinha (ptr, j);
                    printf ("%d\n", diferenca);
                    if (diferenca == 8) {
                        aux++;
                        printf ("%d\n", aux);
                    }
            }
            else 
                break;
        }
    }

    return aux;
}

int somaLinha (int* ptr) {
    int soma = 0;
    for (int i = 0; i < 9; i++)
        soma += *(ptr + i);
    printf ("%d\n", soma);
    return soma;
}

int diferencaLinha (int* ptr, int j) {
    int diferenca = 0;
    for (int i = 0; i < 9; i++) {
        if (i < j)
            if (*ptr != *(ptr - (j - i)) )
                diferenca++;
        if (i > j)
            if (*ptr != *(ptr + (i - j)) )
                diferenca++;
    }
    return diferenca;
}