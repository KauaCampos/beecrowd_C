#include <bits/stdc++.h>
#include <stack>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    string exp;

    while (getline(cin, exp)) {
        if (exp.empty()) break;
        bool condicao = true;
        int aberto = 0, fechado = 0;

        stack<char> pilha;

        for (char ch : exp) {
            if (ch == '(')
                pilha.push(ch);

            else 
                if (ch == ')') {
                    if (!pilha.empty()) {
                        if (ch == ')') {
                            pilha.push(ch);
                        }
                    }

                    else
                        condicao = false;
                }
        }

        if (pilha.top() == '(')
            condicao = false;

        while (!pilha.empty() && condicao) {
            if (pilha.top() == '(') {
                aberto++;
                pilha.pop();
            }
            else
                if (pilha.top() == ')') {
                    fechado++;
                    pilha.pop();
                }
        }

        if (aberto != fechado)
            condicao = false;

        if (condicao)
            cout << "correct" << endl;

        else
            cout << "incorrect" << endl;
    }

    return 0;
}