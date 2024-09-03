#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

struct Participante {
    string nome;
    int idade;
};

bool comparador(const Participante& a, const Participante& b) {
    if (a.idade != b.idade)
        return a.idade > b.idade; // Ordem descendente de idade
    return a.nome < b.nome; // Ordem ascendente de nome se as idades forem iguais
}

int main() {
    int quant;
    cin >> quant;
    cin.ignore(); 

    vector<Participante> participantes(quant);

    for (int i = 0; i < quant; ++i) {
        cin >> participantes[i].nome >> participantes[i].idade;
    }

    sort(participantes.begin(), participantes.end(), comparador);

    int times = quant / 3;

    for (int t = 0; t < times; ++t) {
        cout << "Time " << t + 1 << endl;
        cout << participantes[t].nome << " " << participantes[t].idade << endl;
        cout << participantes[times + t].nome << " " << participantes[times + t].idade << endl;
        cout << participantes[2 * times + t].nome << " " << participantes[2 * times + t].idade << endl;
        cout << endl;
    }

    return 0;
}
