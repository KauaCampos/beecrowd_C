#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

void preencherVetor(int v[], int tam);
int bubbleSortCountSwaps(int v[], int tam);

int main() {
    int cont, tam, vetor[51], vezesTrocadas;
    cin >> cont;

    for (int i = 0; i < cont; i++) {
        cin >> tam;
        preencherVetor(vetor, tam);

        vezesTrocadas = bubbleSortCountSwaps(vetor, tam);

        cout << "Optimal train swapping takes " << vezesTrocadas << " swaps." << endl;
    }

    return 0;
}

void preencherVetor(int v[], int tam) {
    for (int i = 0; i < tam; i++)
        cin >> v[i];
}

int bubbleSortCountSwaps(int v[], int tam) {
    int quant = 0;

    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                quant++;
            }
        }
    }

    return quant;
}
