#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int posicaoMaior (vector<int> estrutura);
int posicao (vector<int> estrutura, int elem);

int main () {
    int tam, acao, elemento;

    while (cin >> tam) {
        vector<int> estrutura;
        bool queue = true, stack = true, queuePrio = true;

        for (int cont = 0; cont < tam; cont++) {
            cin >> acao >> elemento;

            if (acao == 1) {
                estrutura.push_back(elemento);
            }

            else {
                if (queue) {
                    if (elemento != estrutura.front())
                        queue = false;
                }

                if (stack) {
                    if (elemento != estrutura.back())
                        stack = false;
                }

                if (queuePrio) {
                    if (elemento != estrutura[posicaoMaior(estrutura)])
                        queuePrio = false;
                }

                estrutura.erase(estrutura.begin() + posicao(estrutura, elemento));
            }
        }

        if ((queue && queuePrio) || (stack && queuePrio) || (queue && stack))
            cout << "not sure" << endl;

        else {

            if (queue)
                cout << "queue" << endl;

            else
                if (stack)
                    cout << "stack" << endl;
                
                else
                    if (queuePrio)
                        cout << "priority queue" << endl;

                    else
                        cout << "impossible" << endl;

        }
    }

    return 0;
}

int posicaoMaior (vector<int> estrutura) {
    int maior = 0;

    for (int i = 1; i < estrutura.size(); i++)
        if (estrutura[maior] < estrutura[i])
            maior = i;

    return maior;
}

int posicao (vector<int> estrutura, int elem) {
    int aux;
    for (int i = 0; i < estrutura.size(); i++)
        if (estrutura[i] == elem)
            aux = i;

    return aux;
}