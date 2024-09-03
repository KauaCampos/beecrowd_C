#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int n, posicao = 0, menor;
    cin >> n;
    int vetor [n];

    for (int i = 0; i < n; i++)
        cin >> vetor [i];

    menor = vetor [0];
    for (int i = 1; i < n; i++)
        if (vetor [i] < menor) {
            menor = vetor [i];
            posicao = i;
        }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
    return 0;
}