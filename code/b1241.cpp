#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int quant;
    cin >> quant;
    cin.ignore();

    for (int cont = 0; cont < quant; cont++) {
        bool cond;
        string st1, st2;
        cin >> st1 >> st2;

        if (st1.size() < st2.size()) cond = false;
        
        else {
            string result = st1.substr(st1.size() - st2.size(), st2.size());
            if (result == st2) cond = true;
            else cond = false;  
        }

        if (cond) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    
    return 0;
} 