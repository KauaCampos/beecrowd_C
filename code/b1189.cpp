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
    cout << fixed << setprecision(1) << resultado << endl;
    return 0;
}

void preencherMatriz (double m [][NUM]) {
    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            cin >> m[i][j];
}

double calcularResultado (double m [][NUM], char c) {
    double soma = 0;

    for (int coluna = 0; coluna < 5; coluna++)
        for (int linha = 0; linha < 6; linha++)
            if (linha > coluna)
                soma += m[linha][coluna];

    for (int coluna = 0; coluna < 5; coluna++)
        for (int linha = 6; linha < NUM; linha++)
            if (linha + coluna <= 10) 
                soma += m [linha] [coluna];

    if (c == 'S')
        return soma;
    return soma;
} 