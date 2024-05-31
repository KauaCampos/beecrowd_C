#include <stdio.h>
int main (void) {
    char c [10];
    int diaInicial, diaFinal, horaInicial, horaFinal, minutoInicial, minutoFinal, segundoInicial, segundoFinal;

    scanf ("%s %d", &c [10], &diaInicial);
    scanf ("%d %s %d %s %d", &horaInicial, &c [10], &minutoInicial, &c [10], &segundoInicial);
    scanf ("%s %d", &c [10], &diaFinal);
    scanf ("%d %s %d %s %d", &horaFinal, &c [10], &minutoFinal, &c [10], &segundoFinal);

    int instanteInicial = segundoInicial + (minutoInicial * 60) + (horaInicial * 60 * 60) + (diaInicial * 24 * 60 * 60);
    int instanteFinal = segundoFinal + (minutoFinal * 60) + (horaFinal * 60 * 60) + (diaFinal * 24 * 60 * 60);

    int duracaoTotal = instanteFinal - instanteInicial;
    int duracaoDias = duracaoTotal / (24 * 60 * 60);
    int duracaoHoras = (duracaoTotal % (24 * 60 * 60)) / (60 * 60);
    int duracaoMinutos = ((duracaoTotal % (24 * 60 * 60)) % (60 * 60)) / 60;
    int duracaoSegundos = ((duracaoTotal % (24 * 60 * 60)) % (60 * 60)) % 60;

    printf ("%d dia (s)\n",duracaoDias);
    printf ("%d hora (s)\n",duracaoHoras);
    printf ("%d minuto (s)\n",duracaoMinutos);
    printf ("%d segundo (s)\n",duracaoSegundos);
}