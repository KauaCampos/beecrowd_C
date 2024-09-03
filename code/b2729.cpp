#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int n;
    cin >> n;
    cin.ignore();
    
    for (int cont = 0; cont < n; cont++) {
        string lista;
        getline(cin, lista);

        vector<string> elementos;
        
        int comeco = 0;
        for (int i = 0; i < lista.size(); i++)
            if (lista [i] == ' ') {
                elementos.push_back(lista.substr(comeco, i - comeco - 1));
                comeco = i + 1;
            }

        elementos.push_back(lista.substr(comeco, lista.size() - comeco - 1));

        sort(elementos.begin(), elementos.end());

        vector<string> elementosFinal;
        elementosFinal [0] = elementos [0];

        for (int i = 1, j = 1; i < elementos.size(); i++) {
            if (elementos[i] == elementos[i - 1]) {
                continue;
            }

            elementosFinal [j] = elementos [i];
            j++;
        }

        for (int i = 0; i < elementos.size(); i++) {
            if (i == elementosFinal.size() - 1) {
                cout << elementosFinal[i] << endl;
                break;
            }

            cout << elementosFinal[i] << " " << endl;
        }
    }

    return 0;
}