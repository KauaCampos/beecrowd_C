#include <bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int numFun, numCli, aux, minutos = 0;
    bool condicao = true;
    cin >> numFun >> numCli;

    int velocidade[numFun];
    queue<int> produtos;

    for (int i = 0; i < numFun; i++)
        cin >> velocidade[i];

    for (int i = 0; i < numCli; i++) {
        cin >> aux;
        produtos.push(aux);
    }

    vector<queue<int>> caixas(numFun);

    for (int i = 0; i < numFun; i++) {
        if (!produtos.empty()) {
            caixas[i].push(produtos.front() * velocidade[i]);
            produtos.pop();
        }
    }

    while (condicao) {
        condicao = false;
        for (int i = 0; i < numFun; i++) {
            if (!caixas[i].empty()) {
                condicao = true;
                caixas[i].front()--;

                if (caixas[i].front() == 0) {
                    caixas[i].pop();

                    if (!produtos.empty()) {
                        caixas[i].push(produtos.front() * velocidade[i]);
                        produtos.pop();
                    }
                }
            }
        }

        if (condicao) 
            minutos++;
    }

    cout << minutos << endl;

    return 0;
}
