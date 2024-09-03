#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int cont, x, y, n, m;
    while (true) {
        cin >> cont;
        if (cont == 0) break;
        
        cin >> n >> m;

        for (int i = 0; i < cont; i++) {
            cin >> x >> y;

            if (x == n || m == y) {
                cout << "divisa" << endl;
                continue;
            }

            bool esquerda = (x < n);
            bool embaixo = (y < m);

            if (esquerda) {
                if (embaixo)
                    cout << "SO" << endl;
                else
                    cout << "NO" << endl;
            }

            else {
                if (embaixo)
                    cout << "SE" << endl;
                else
                    cout << "NE" << endl;
            }
        }
    }
    return 0;
}