#include <stdio.h>
int main (void) {
    char tipo1 [15], tipo2 [15], tipo3 [15];
    scanf ("%s %s %s", &tipo1 [15], &tipo2 [15], &tipo3 [15]);
    if (tipo1 [15] == 'vertebrado') {
        switch (tipo2 [15])
        {
        case 'ave': 
            switch (tipo3 [15]) {
                case 'carnivoro':
                    puts ("aguia");
                    break;
                default: 
                    puts ("pomba");
            }
            break;
        default:
            switch (tipo3 [15]) {
                case 'onivoro':
                    puts ("homem");
                    break;
                default:
                    puts ("vaca");
            }
        }
    }
    else {
        switch (tipo2 [15])
        {
        case 'inseto': 
            switch (tipo3 [15]) {
                case 'hematofogo':
                    puts ("pulga");
                    break;
                default: 
                    puts ("lagarta");
            }
            break;
        default:
            switch (tipo3 [15]) {
                case 'hematofogo':
                    puts ("sanguessuga");
                    break;
                default:
                    puts ("minhoca");
            }
        }
    }
}