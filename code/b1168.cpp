#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    int cont, leds;
    cin >> cont;
    cin.ignore();

    string num;
    for (int aux = 0; aux < cont; aux++) {
        getline (cin, num);

        leds = 0;
        for (char ch : num)
            switch (ch) {
                case '1': leds += 2;
                          break;
                
                case '2': 
                case '5':
                case '3': leds += 5;
                          break;

                case '4': leds += 4;
                          break;

                case '0':
                case '9':
                case '6': leds += 6;
                          break;

                case '7': leds += 3;
                          break;

                default: leds += 7;
            }

        cout << leds << " leds" <<endl;
    }

    return 0;
} 