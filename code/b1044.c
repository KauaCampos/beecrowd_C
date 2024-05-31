#include <stdio.h>
int main () {
    int x, y;
    scanf ("%d %d", &x, &y);
    if (x % y == 0 || y % x == 0)
        puts ("Sao Multiplos");
    else    
        puts ("Nao sao Multiplos");
    return 0;
}