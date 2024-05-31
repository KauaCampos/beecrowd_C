#include <stdio.h>

int main () {
    int x;
    while (scanf ("%d", &x) != EOF) {
        if (x == 0)
            puts ("vai ter copa!");
        else    
            puts ("vai ter duas!");
    }
    return 0;
}