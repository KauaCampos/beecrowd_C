#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double nota;
    long codigo;
}Notas;

void quickSort (double* vetor, int quant);

int main () {
    Notas *alunos;
    int quant;
    scanf ("%d", &quant);

    alunos = (Notas*) malloc (sizeof(Notas) * quant);

    for (int i = 0; i < quant; i++) {
        scanf ("%ld %lf", alunos->codigo, alunos->nota);
    }

    double *nota = (double*) malloc (sizeof(double) * quant);
    for (int i = 0; i < quant; i++)
        nota [i] = alunos->nota;

    quickSort (nota, quant);
    if (nota [quant-1] < 8)
        printf ("Minimum note not reached");

    else
        for (int i = 0; i < quant; i++)
            if (alunos[i].nota == nota [quant-1])
                printf ("%ld\n", alunos[i].codigo);

    return 0;
}

void quickSort (double* vetor, int quant) {
    int aux, pivo, i, j;

    if (quant < 2)
        return;

    pivo = vetor [quant / 2];

    for (i = 0, j = quant - 1; ;i++, j--) {
        //movimentando itens no vetor
        while (vetor [i] < pivo) 
            i++;
        while (pivo < vetor [j])
            j--;

        //criterio parada de loop
        if (i >= j)
            break;
        
        aux = vetor [i];
        vetor [i] = vetor [j];
        vetor [j] = aux;
    } 

    quickSort (vetor, i);
    quickSort (vetor + i, quant - i);
}