#include <stdio.h>

#define NUM 12

void soma(double v[NUM][NUM]);
void media(double v[NUM][NUM]);

int main()
{
    double M[NUM][NUM];
    char c;
    scanf(" %c", &c);

    for (int i = 0, j = 0; i < NUM; j++)
    {
        if (j == NUM)
        {
            j = 0;
            i++;
        }
        scanf("%lf", &M[i][j]);
    }

    if (c == 'S')
        soma(M);
    else
        media(M);
    return 0;
}

void soma(double v[NUM][NUM])
{
    double result = 0;
    for (int i = 0; i < NUM; i++)
    {
        for (int j = 0; j < NUM; j++)
        {
            if (j >= i)
                break;

            result += v[i][j];
        }
    }
    printf("%.1f\n", result);
}

void media(double v[NUM][NUM])
{
    double result = 0;
    int cont = 0;
    for (int i = 0; i < NUM; i++)
    {
        for (int j = 0; j < NUM; j++)
        {
            if (j >= i)
                break;

            result += v[i][j];
            cont++;
        }
    }
    result = result / cont;

    printf("%.1f\n", result);
}
