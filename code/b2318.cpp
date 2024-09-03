#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int quant, sorteado;
    cin >> quant >> sorteado;
    cin.ignore();

    string str;
    vector<string> nomes;

    for (int i = 0; i < quant; i++) {
        getline (cin, str);
        nomes.push_back(str);
    }

    sort(nomes.begin(), nomes.end());

    cout << nomes[sorteado - 1] << endl;

    return 0;
}