#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    _;

    int size;
    cin >> size;

    vector<int> vizinhanca(size);
    for (int i = 0; i < size; i++) {
        cin >> vizinhanca[i];
    }

    int i = 0; 
    int roubados = 0;

    while (i >= 0 && i < size) {
        if (vizinhanca[i] > 0) {
            roubados++;
            vizinhanca[i]--;
        }

        if (vizinhanca[i] % 2 == 0) {
            i--;
        } else {
            i++;
        }
    }

    int soma = 0;
    for (int num : vizinhanca) {
        soma += num;
    }

    cout << roubados << " " << soma << endl;

    return 0;
}
