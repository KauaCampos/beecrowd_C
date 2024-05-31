#include <stdio.h>

void incializarM (int g [255] [5], int l);
void selecionarSaida (int p);

int main () {
    int gabarito [255] [5];
    int quantLinhas, quadradosPretos, posicaoPreto;

    while (1) {
        scanf ("%d", &quantLinhas);
        if (quantLinhas == 0)
            return 0;

        incializarM (gabarito, quantLinhas);
        for (int i = 0; i < quantLinhas; i++) {
            posicaoPreto = 0;
            quadradosPretos = 0;

            for (int j = 0; j < 5; j ++) {
                if (gabarito [i] [j] <= 127) {
                    quadradosPretos ++;
                    posicaoPreto = j;
                }
            }

            if (quadradosPretos != 1) {
                puts ("*");
                continue;
            }

            else  
                selecionarSaida (posicaoPreto);
        }  
    }
}

void incializarM (int g [255] [5], int l) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < 5; j++)  
            scanf ("%d", &g [i] [j]);
}

void selecionarSaida (int p) {
    switch (p) {
        case 0:
            puts ("A");
            break;

        case 1:
            puts ("B");
            break;

        case 2:
            puts ("C");
            break;

        case 3:
            puts ("D");
            break;

        default:
            puts ("E");
    }
}