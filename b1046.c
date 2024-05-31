#include <stdio.h>

int main ()
{
    int HoraInicial, HoraFinal, Duracao;
    scanf ("%d %d", &HoraInicial, &HoraFinal);
    
    Duracao = HoraFinal - HoraInicial;
    if (Duracao < 0)
        Duracao = Duracao + 24;
    
    printf ("O JOGO DUROU %d HORA(S)",Duracao);
    
    return 0;
}