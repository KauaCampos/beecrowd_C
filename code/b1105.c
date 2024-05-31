#include <stdio.h>

#define NUM 20

// funcao utilizada para inicializar todas as dividas com 0
void iniciar (int d [NUM], int bancos);
void cobranca (int d [NUM], int dev, int cred, int val);

// funcao utilizada para verificar se algum banco contem dividas
int verificacao (int d [NUM], int bancos);

int main () {
    int divida [NUM];

    int numBancos, numDevedores, bancoCredor, bancoDevedor, valorPedido;
    while (1) {
        scanf ("%d %d", &numBancos, &numDevedores);
        if (numBancos == 0 && numDevedores == 0) {
            break;
        }
        iniciar (divida, numBancos);

            for (int aux = 0; aux < numDevedores; aux++) {
                scanf ("%d %d %d", &bancoDevedor, &bancoCredor, &valorPedido);
                if (bancoDevedor == bancoCredor) {
                    aux --;
                    continue;
                }
                cobranca (divida, bancoDevedor, bancoCredor, valorPedido);
            }
        if (verificacao (divida, numBancos))
            puts ("S");
        else    
            puts ("N");
    }

    return 0;
} 

void iniciar (int d [NUM], int bancos) {
    for (int i = 0; i < bancos; i++)
            scanf ("%d", &d [i]);
}

void cobranca (int d [NUM], int dev, int cred, int val) {
    d [dev - 1] -= val;
    d [cred - 1] += val;
}

int verificacao (int d [NUM], int bancos) {
    int num = 0;
    for (int x = 0; x < bancos; x++) 
        if (d [x] >= 0)
            num++;
    
    return (num == bancos);
}