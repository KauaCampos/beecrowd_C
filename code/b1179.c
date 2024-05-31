#include <stdio.h>

#define NUM 5
#define MAX_ENTRADA 15

int main () {
    int par [NUM], impar [NUM], num, iPar = 0, iImpar = 0, contPar = 0, contImpar = 0;
    for (int i = 0; i < MAX_ENTRADA; i++) {
        scanf ("%d", &num);
        if (num % 2 == 0) {
            par [iPar] = num;

            if (iPar == 4) {
                for (int j = 0; j < NUM; j++) 
                    printf ("par [%d] = %d\n", j, par [j]);
                iPar = 0;
                continue;
            }

            iPar ++;
            contPar ++;
        }

        else {
            impar [iImpar] = num;

            if (iImpar == 4) {
                for (int j = 0; j < NUM; j++) 
                    printf ("impar [%d] = %d\n", j, impar [j]);
                iImpar = 0;
                continue;
            }

            iImpar ++;
            contImpar ++;
        }
    }

    contImpar -= NUM;
    contPar -= NUM;

    if (contImpar >= 0)
        for (int i = 0; i <= contImpar; i ++)
            printf ("impar [%d] = %d\n", i, impar [i]);
    if (contPar >= 0)
        for (int i = 0; i <= contPar; i ++)
            printf ("par [%d] = %d\n", i, par [i]);

    return 0;
}