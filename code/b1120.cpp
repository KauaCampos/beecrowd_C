#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    _  // Macro para acelerar a entrada e saída

    while (true) {
        char c;
        cin >> c;
        cin.ignore();  // Ignorar o caractere de nova linha após 'cin >> c'

        string num;
        getline(cin, num);

        // Condição de parada
        if (c == '0' && num == "0") {
            return 0;
        }
    
        vector<char> resultado;
        for (char ch : num) {
            if (ch != c) {
                resultado.push_back(ch);
            }
        }

        // Remover zeros à esquerda
        while (!resultado.empty() && resultado.front() == '0') {
            resultado.erase(resultado.begin());
        }

        // Verificar se o resultado está vazio após remover os zeros
        if (resultado.empty()) {
            cout << "0" << endl;
        } else {
            for (char ch : resultado) {
                cout << ch;
            }
            cout << endl;
        }
    }

    return 0;
}
