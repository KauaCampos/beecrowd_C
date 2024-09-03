#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int quant;
    cin >> quant;
    cin.ignore();
    
    for (int cont = 0; cont < quant; cont++) {
        string s;
        getline (cin, s);

        stack<char> esquerda, direita;
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() / 2) esquerda.push(s[i]);
            else direita.push(s[i]);
        }

        while(!(esquerda.empty())) {
            cout << esquerda.top();
            esquerda.pop();
        }

        while(!(direita.empty())) {
            cout << direita.top();
            direita.pop();
        }

        cout << endl;
    }

    return 0;
}