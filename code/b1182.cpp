#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

void preencherMatriz (double matriz [] [12]);
double calcularSoma (double m [] [12], int coluna);
void saida (char escolha, double soma);

int main () {
    double matriz [12] [12];
    char escolha;
    int coluna;
    
    cin >> coluna >> escolha;
    preencherMatriz (matriz);

    double soma = calcularSoma(matriz, coluna);

    saida (escolha, soma);
    return 0;
}

void preencherMatriz (double matriz [] [12]) {
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> matriz [i] [j];
}

double calcularSoma (double m [] [12], int coluna) {
    double soma = 0;
    for (int i = 0; i < 12; i++)
        soma += m [i] [coluna];

    return soma;
}

void saida (char escolha, double soma) {
    switch (escolha) {
    case 'S':
        printf ("%.1f\n", soma);
        break;
    
    default:
        printf ("%.1f\n", soma / 12);
    }
}