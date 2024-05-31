#include <stdio.h>
int main()
{
    int cem, cin, vin, dez, cinco, dois, um, cinquenta, vincin, dezcentavos, cincocentavos, umcentavo;
    double money;

    //As 5 ultimas variaveis sao em centavos//

    scanf ("%lf", &money);
    int reais = (int)money; 
    int centavos = (money - reais) * 100;

    cem = reais / 100;
    cin = (reais % 100) / 50;
    vin = ((reais % 100) % 50) / 20;
    dez = (((reais % 100) % 50) % 20) / 10;
    cinco = ((((reais % 100) % 50) % 20) % 10) / 5;
    dois = (((((reais % 100) % 50) % 20) % 10) % 5) / 2;
    um = (((((reais % 100) % 50) % 20) % 10) % 5) % 2;

    cinquenta = centavos / 50;
    vincin = (centavos % 50) / 25;
    dezcentavos = ((centavos % 50) % 25) / 10;
    cincocentavos = (((centavos % 50) % 25) % 10) / 5;
    umcentavo = (((centavos % 50) % 25) % 10) % 5;

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", cem);
    printf ("%d nota(s) de R$ 50.00\n", cin);
    printf ("%d nota(s) de R$ 20.00\n", vin);
    printf ("%d nota(s) de R$ 10.00\n", dez);
    printf ("%d nota(s) de R$ 5.00\n", cinco);
    printf ("%d nota(s) de R$ 2.00\n", dois);
    
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", um);
    printf ("%d moeda(s) de R$ 0.50\n", cinquenta);
    printf ("%d moeda(s) de R$ 0.25\n", vincin);
    printf ("%d moeda(s) de R$ 0.10\n", dezcentavos);
    printf ("%d moeda(s) de R$ 0.05\n", cincocentavos);
    printf ("%d moeda(s) de R$ 0.01\n", umcentavo);

    return 0;
}