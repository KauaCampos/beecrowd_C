#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef struct {
    string nome, cor;
    char tamanho;
}Camisa;

void organizarTam (vector<Camisa>& a);
bool comparador (const Camisa& a, const Camisa& b);
void saida (vector<Camisa> a);

int main () {
    int quant;
    bool aux = false;

    while (true) {
        cin >> quant;
        if (quant == 0) break;
        cin.ignore();

        if (aux) cout << endl;
        else aux = true;

        vector<Camisa> branco, vermelho;
        Camisa aux;

        for (int cont = 0; cont < quant; cont++) {
            getline (cin, aux.nome);
            cin >> aux.cor >> aux.tamanho;
            cin.ignore();

            if (aux.cor == "vermelho")
                vermelho.push_back(aux);
            else
                branco.push_back(aux);
        }
        
        sort(branco.begin(), branco.end(), comparador);
        sort(vermelho.begin(), vermelho.end(), comparador);

        organizarTam (branco);
        organizarTam (vermelho);

        saida(branco);
        saida(vermelho);
    }

    return 0;
}

void organizarTam (vector<Camisa>& a) {

    for (int i = 0; i < a.size(); i++) 
        for (int j = i + 1; j < a.size(); j++) 
            if (a[i].tamanho < a[j].tamanho)
                swap(a[i], a[j]);

}

bool comparador (const Camisa& a, const Camisa& b) {
    return a.nome < b.nome;
}

void saida (vector<Camisa> a) {
    while (!(a.empty())) {
        cout << a.front().cor << " " << a.front().tamanho << " " << a.front().nome << endl;
        a.erase(a.begin());
    }
}

