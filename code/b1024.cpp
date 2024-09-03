#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int quant;
    cin >> quant;
    cin.ignore();

    for (int cont = 0; cont < quant; cont++) {
        string frase;
        getline (cin, frase);

        vector<char> passo1;
        for (char ch : frase) {
            if ((ch > 96 && ch < 123) || (ch > 64 && ch < 91))
                passo1.push_back(ch + 3);

            else
                passo1.push_back(ch);
        }

        vector<char> resultado;
        while (!(passo1.empty())) {
            resultado.push_back(passo1.back());
            passo1.pop_back();
        }

        for (int i = resultado.size() / 2; i < resultado.size(); i++) 
            resultado[i]--;
        

        for (char ch : resultado)
            cout << ch;

        cout << endl;
    }
    return 0;
}