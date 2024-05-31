#include <stdio.h>

void iniciar (int* ptr, int quant);
void saida (int condicao);

int main() {
    int quant, condicao = 1;
    scanf("%d", &quant);
    int v [100]; 
    int *ptr = v; 
    iniciar (ptr, quant);
    ptr = v;

    if (quant == 2 && *ptr == *(ptr + 1))
        condicao = 0;
    else {
        ptr += 2; 

        for (int i = 2; i < quant; i++, ptr++) {
            if ((*ptr >= *(ptr - 1) && *(ptr - 1) >= *(ptr - 2)) || (*ptr <= *(ptr - 1) && *(ptr - 1) <= *(ptr - 2))) {
                condicao = 0;
                break;
            }
        }
    }
    saida (condicao);
    return 0;
}

void iniciar (int* ptr, int quant) {
    for (int i = 0; i < quant; i++, ptr++)
        scanf("%d", ptr); 
}

void saida (int condicao) {
    printf("%d\n", condicao);
}