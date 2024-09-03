#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int quant;
    cin >> quant;
    cin.ignore();

    for (int cont = 0; cont < quant; cont++) {
        string str1, str2;
        cin >> str1 >> str2;

        queue<char> string1, string2;
        for (char i : str1) string1.push(i);
        for (char i : str2) string2.push(i);

        while (!(string1.empty()) || !(string2.empty())) {
            if (!(string1.empty())) {
                cout << string1.front();
                string1.pop();
            }

            if (!(string2.empty())) {
                cout << string2.front();
                string2.pop();
            }
        }

        cout << endl;
    }

    return 0;
}