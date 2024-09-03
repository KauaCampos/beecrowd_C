#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int quant, mudancas, num;

    while (true) {
        cin >> quant;
        if (quant == 0) break;

        vector<int> numeros;
        mudancas = 0;

        for (int cont = 0; cont < quant; cont++) {
            cin >> num;
            numeros.push_back(num);
        }

        for (int i = 0; i < quant; i++)
            for (int j = 0; j < quant - 1; j++) 
                if (numeros[i] > numeros[j]) {
                    swap(numeros[i], numeros[j]);
                    mudancas++;
                }

        if (mudancas % 2 == 0) cout << "Carlos" << endl;
        else cout << "Marcelo" << endl;   
    }

    return 0;
}