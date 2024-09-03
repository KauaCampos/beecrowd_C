#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

void preencherVetor (int v[], int quant);
int acharMenorPosicao (int v[], int quant);

int main () {
    int quant;
    cin >> quant;

    int vetor [quant + 1];
    preencherVetor(vetor, quant);

    int index = acharMenorPosicao(vetor, quant);

    cout << index << endl;
    return 0;
}

void preencherVetor (int v[], int quant) {
    for (int i = 0; i < quant; i++)
        cin >> v[i];
}

int acharMenorPosicao (int v[], int quant) {
    int menor = 0;

    for (int i = 1; i < quant; i++)
        if (v[menor] > v[i])
            menor = i;

    return menor + 1;
}