#include <stdio.h>

void inicializarM_Marcos (int m [100] [100], int atributos, int numCartas);
void inicializarM_Leonardo (int m [100] [100], int atributos, int numCartas);
int verificacao (int m_Marcos [100] [100], int m_Leo [100] [100], int atributo,
                 int cartaMarco, int cartaLeo);

int main () {
    int cartasMarcos [100] [100], cartasLeonardo [100] [100];
    int numCartasMarcos, numCartasLeonardo, numAtributos;
    while (scanf ("%d", &numAtributos) != EOF) {
        scanf ("%d %d", &numCartasMarcos, &numCartasLeonardo);
        inicializarM_Marcos (cartasMarcos, numAtributos, numCartasMarcos);
        inicializarM_Leonardo (cartasLeonardo, numAtributos, numCartasLeonardo);

        int cartaEscolhida_Marcos, cartaEscolhida_Leonardo, atributoEscolhido;
        scanf ("%d %d", &cartaEscolhida_Marcos, &cartaEscolhida_Leonardo);
        scanf ("%d", &atributoEscolhido);

        switch (verificacao (cartasMarcos, cartasLeonardo, atributoEscolhido, cartaEscolhida_Marcos, 
                             cartaEscolhida_Leonardo)) {
            case 0: puts ("Empate");
                    break;
            case 1: puts ("Marcos");
                    break;
            default: puts ("Leonardo");
        }
    }
    return 0;
}

void inicializarM_Marcos (int m [100] [100], int atributos, int numCartas) {
    for (int i = 0; i < numCartas; i++)
        for (int j = 0; j < atributos; j++)
            scanf ("%d", &m [i] [j]);
}

void inicializarM_Leonardo (int m [100] [100], int atributos, int numCartas) {
    for (int i = 0; i < numCartas; i++)
        for (int j = 0; j < atributos; j++)
            scanf ("%d", &m [i] [j]);
}

int verificacao (int m_Marcos [100] [100], int m_Leo [100] [100], int atributo,
                 int cartaMarco, int cartaLeo) {
    if (m_Marcos [cartaMarco - 1] [atributo - 1] == m_Leo [cartaLeo - 1] [atributo - 1])
        return 0;
    if (m_Marcos [cartaMarco - 1] [atributo - 1] > m_Leo [cartaLeo - 1] [atributo - 1])
        return 1;
    return 2;
}