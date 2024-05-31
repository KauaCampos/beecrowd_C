#include <stdio.h>

#define NUM 12

void construirMatriz(double matriz [] [NUM]);
void saida (double matriz [] [NUM], char c);
double calcularSoma (double matriz [] [NUM]);
double calcularResultado (double matriz [] [NUM], char c);
double primeiroLaco (double matriz [] [NUM]);
double segundoLaco (double matriz [] [NUM]);


int main () {
    double matriz [NUM][NUM];
    char escolha = getchar ();

    construirMatriz(matriz);
    saida (matriz, escolha);
    return 0;
}

void construirMatriz(double matriz [] [NUM]) {
    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            scanf ("%lf", &matriz[i][j]);
}

void saida (double matriz [] [NUM], char c) {
    double resultado = calcularResultado (matriz, c);
    printf ("%.1f\n", resultado);
}

double calcularResultado (double matriz [] [NUM], char c) {
    double soma = calcularSoma (matriz);
    switch (c) {
        case 'S':
            return soma;
    
        default:
            return soma / 30;
    }
}

double calcularSoma (double matriz [] [NUM]) {
    double soma = 0;

    soma += primeiroLaco(matriz);
    soma += segundoLaco(matriz);

    return soma;
}

double primeiroLaco (double matriz [] [NUM]) {
    double soma = 0;

    for (int coluna = 0; coluna < 6; coluna++)
        for (int linha = 0; linha < 5; linha++) 
            if (linha < coluna) 
                soma += matriz [linha] [coluna];

    return soma;
}

double segundoLaco (double matriz [] [NUM]) {
    double soma = 0;

    for (int coluna = 6; coluna < 11; coluna++)
        for (int linha = 0; linha <= 4; linha++)
            if (linha + coluna <= 10) 
                soma += matriz [linha] [coluna];


    return soma;
}