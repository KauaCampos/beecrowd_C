#include <stdio.h>
int main () {
    int Tempo, Horas, Minutos, Segundos;
    scanf ("%d", &Tempo);
    Horas = Tempo / 3600;
    Minutos = (Tempo % 3600) / 60;
    Segundos = ((Tempo % 3600) % 60);
    printf ("%d:%d:%d\n",Horas,Minutos,Segundos);
    return 0;
}