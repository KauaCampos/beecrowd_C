#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define NUM 12

void preencherMatriz (double m [][NUM]);
double calcularResultado (double m [][NUM], char c);

int main () {
    char escolha;
    cin >> escolha;

    double matriz [NUM][NUM];
    preencherMatriz (matriz);

    double resultado = calcularResultado (matriz, escolha);
    printf ("%.1f\n", resultado);
    return 0;
}

void preencherMatriz (double m [][NUM]) {
    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            cin >> m[i][j];
}

double calcularResultado (double m [][NUM], char c) {
    double soma = 0;

    //primeiro laco
    for (int coluna = 0; coluna < 6; coluna++)
        for (int linha = 7; linha < 12; linha++)
            if ((linha + coluna) >= 12)
                soma += m [linha][coluna];
        
    //segundo laco
    for (int coluna = 6; coluna < 12; coluna++)
        for (int linha = 11; linha > 6; linha--) {
            if (coluna == linha)
                break;
            
            soma += m [linha][coluna];
        }

    if (c == 'S')
        return soma;
    return soma/30.0;
}