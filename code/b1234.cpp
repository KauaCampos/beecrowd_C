#include <iostream>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    string str;

    while (getline(cin, str)) {
    bool maiusculo = true, letraMaius, letraMin;
    
        for (char ch : str) {
            letraMaius = false; letraMin = false;

            if (ch >= 'a' && ch <= 'z') letraMin = true;
            if (ch >= 'A' && ch <= 'Z') letraMaius = true;

            if (maiusculo) {
                if (letraMin) ch -= 'a' - 'A';

                cout << ch;
            }

            else {
                if (letraMaius) ch += 'a' - 'A';
                
                cout << ch;
            }

            if (letraMaius || letraMin) maiusculo = !maiusculo;
        }

        cout << endl;
    }

    return 0;
}