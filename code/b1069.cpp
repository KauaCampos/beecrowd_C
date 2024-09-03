#include <bits/stdc++.h>
#include <stack>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () { _
    int cont;
    cin >> cont;
    cin.ignore();

    for (int a = 0; a < cont; a++) {
        string expressao;
        getline(cin, expressao);

        stack<char> pilha;
        int diamantes = 0;

        for (char ch : expressao) {
            if (ch == '<') {
                pilha.push(ch);
            } 
            else 
                if (ch == '>') {
                    if (!pilha.empty()) {
                        pilha.pop();
                        diamantes++;
                    }
                }
        }

        cout << diamantes << endl;
    }

    return 0;
}