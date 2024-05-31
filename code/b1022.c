#include <stdio.h>

void subtracao (int N1, int N2, int D1, int D2);
/**void adicao (int N1, int N2, int D1, int D2);
void divisao (int N1, int N2, int D1, int D2);
void multiplicacao (int N1, int N2, int D1, int D2);**/
int mdc(int a, int b);

int main () {
    int cont;
    scanf ("%d", &cont);

    int n1, n2, d1, d2;
    char c [2], calc;

    for (int x = 0; x < cont; x++) {
        scanf ("%d %c %d %c %d %c %d", &n1, &c [0], &d1, &calc, &n2, &c [1], &d2);
        switch (c [1]) {
            case '-': subtracao (n1, n2, d1, d2); 
            break;

            /**case '+': adicao (n1, n2, d1, d2);
            break;

            case '/': divisao (n1, n2, d1, d2);
            break;

            default: multiplicacao (n1, n2, d1, d2);**/
        }
    }

    return 0;
}

void subtracao (int N1, int N2, int D1, int D2) {
    int N3, D3;
    N3 = N1 * D2 - N2 * D1;
    D3 = D1 * D2;
    printf ("%d/%d =", N3, D3);

    int div;
    if (N3 % D3 == 0 || D3 % N3 == 0) {
        div = mdc (N3, D3);
        D3 = D3 / div;
        N3 = N3 / div;
    }
    printf (" %d/%d\n", N3, D3);
}

int mdc(int a, int b) {
    if (b == 0) 
        return a;
    else 
        return mdc(b, a % b);
}