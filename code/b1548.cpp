#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int n, quant, num;
    cin >> n;

    for (int cont = 0; cont < n; cont++) {
        vector<int> fila;
        cin >> quant;

        for (int i = 0; i < quant; i++) {
            cin >> num;
            fila.push_back(num);
        }

        vector<int> filaArrumada;
        filaArrumada.assign(fila.begin(), fila.end());

        sort(filaArrumada.begin(), filaArrumada.end(), greater<int>());

        for (int i = 0; i < fila.size(); i++)
            if (!(filaArrumada [i] == fila [i]))
                quant--;

        cout << quant << endl;
    }

    return 0;
}