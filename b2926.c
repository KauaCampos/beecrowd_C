#include <stdio.h>

void saida (int num);

int main () {
    int x;
    scanf ("%d", &x);
    saida (x);
    return 0;
}

void saida (int num) {
    printf ("Ent");
    for (int i = 0; i < num; i++)
        putchar ('a');

    printf ("o eh N");
    for (int i = 0; i < num; i++)
        putchar ('a');
    
    printf ("t");
    for (int i = 0; i < num; i++)
        putchar ('a');
    printf ("l!\n");
    
}