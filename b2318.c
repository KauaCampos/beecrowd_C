#include <stdio.h>

#define NUM 3

void inicializarM (int m [NUM] [NUM]);
void reorganizarQuadrado (int m [NUM] [NUM], int soma, int Linha1, int Linha2, int Linha3, int Coluna1,
                          int Coluna2, int Coluna3, int Diagonal1, int Diagonal2);
int acharSomaMax (int soma1, int soma2);
void saidaM (int m [NUM] [NUM]);

int main () {
    int m [NUM] [NUM]; //quadrado
    inicializarM (m);

    int somaLinha1 = m [0] [0] + m [0] [1] + m [0] [2];
    int somaLinha2 = m [1] [0] + m [1] [1] + m [1] [2];
    int somaLinha3 = m [2] [0] + m [2] [1] + m [2] [2];
    int somaColuna1 = m [0] [0] + m [1] [0] + m [2] [0];
    int somaColuna2 = m [0] [1] + m [1] [1] + m [2] [1];
    int somaColuna3 = m [0] [2] + m [1] [2] + m [2] [2];
    int somaDiagonal1 = m [0] [0] + m [1] [1] + m [2] [2];
    int somaDiagonal2 = m [0] [2] + m [1] [1] + m [2] [0];

    int somaTotal = somaColuna1;
    somaTotal = acharSomaMax (somaTotal, somaLinha2);
    somaTotal = acharSomaMax (somaTotal, somaLinha3);
    somaTotal = acharSomaMax (somaTotal, somaColuna1);
    somaTotal = acharSomaMax (somaTotal, somaColuna2);
    somaTotal = acharSomaMax (somaTotal, somaColuna3);
    somaTotal = acharSomaMax (somaTotal, somaDiagonal1);
    somaTotal = acharSomaMax (somaTotal, somaDiagonal2);

    reorganizarQuadrado (m, somaTotal, somaLinha1, somaLinha2, somaLinha3, somaColuna1, somaColuna2, 
                         somaColuna3, somaDiagonal1, somaDiagonal2);
    saidaM (m);

    return 0;
}

void inicializarM (int m [NUM] [NUM]) {
    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            scanf ("%d", &m [i] [j]);
}

void reorganizarQuadrado (int m [NUM] [NUM], int soma, int Linha1, int Linha2, int Linha3, int Coluna1,
                          int Coluna2, int Coluna3, int Diagonal1, int Diagonal2) {
    if (Linha1 != soma) {
        if (m [0] [0] == 0)
            m [0] [0] = soma - Linha1;
        if (m [0] [1] == 0)
            m [0] [1] = soma - Linha1;
        if (m [0] [2] == 0)
            m [0] [2] = soma - Linha1;
    }
    if (Linha2 != soma) {
        if (m [1] [0] == 0)
            m [1] [0] = soma - Linha2;
        if (m [1] [1] == 0)
            m [1] [1] = soma - Linha2;
        if (m [1] [2] == 0)
            m [1] [2] = soma - Linha2;
    }
    if (Linha3 != soma) {
        if (m [2] [0] == 0)
            m [2] [0] = soma - Linha3;
        if (m [2] [1] == 0)
            m [2] [1] = soma - Linha3;
        if (m [2] [2] == 0)
            m [2] [2] = soma - Linha3;
    }
    if (Coluna1 != soma) {
        if (m [0] [0] == 0)
            m [0] [0] = soma - Coluna1;
        if (m [1] [0] == 0)
            m [1] [0] = soma - Coluna1;
        if (m [2] [0] == 0)
            m [2] [0] = soma - Coluna1;
    }
    if (Coluna2 != soma) {
        if (m [0] [1] == 0)
            m [0] [1] = soma - Coluna2;
        if (m [1] [1] == 0)
            m [1] [1] = soma - Coluna2;
        if (m [2] [1] == 0)
            m [2] [1] = soma - Coluna2;
    }
    if (Coluna3 != soma) {
        if (m [0] [2] == 0)
            m [0] [2] = soma - Coluna3;
        if (m [1] [2] == 0)
            m [1] [2] = soma - Coluna3;
        if (m [2] [2] == 0)
            m [2] [2] = soma - Coluna3;
    }
    if (Diagonal1 != soma) {
        if (m [0] [0] == 0)
            m [0] [0] = soma - Diagonal1;
        if (m [1] [1] == 0)
            m [1] [1] = soma - Diagonal1;
        if (m [2] [2] == 0)
            m [2] [2] = soma - Diagonal1;
    }
    if (Diagonal2 != soma) {
        if (m [0] [2] == 0)
            m [0] [2] = soma - Diagonal2;
        if (m [1] [1] == 0)
            m [1] [1] = soma - Diagonal2;
        if (m [2] [0] == 0)
            m [2] [0] = soma - Diagonal2;
    }
}

int acharSomaMax (int soma1, int soma2) {
    if (soma2 > soma1)
        return soma2;
    return soma1;
}

void saidaM (int m [NUM] [NUM]) {
    for (int i = 0; i < NUM; i++) 
        printf ("%d %d %d\n", m [i] [0], m [i] [1], m [i] [2]);
}