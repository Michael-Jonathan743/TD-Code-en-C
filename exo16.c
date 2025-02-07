#include <stdio.h>

int main()
{
    int n, i, t = 0;
    int f = 1, S = 0;
ici:
    printf("Saisir un entier positif non nul: \n\tn: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Le factoriel d'un entier négatif n'existe pas\n\tRéessayer!\n");
        goto ici;
    }
    else if (n == 1 || n == 0)
    {
        printf("%d!=1", n);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            f = f * i;
            S = S + f;
        }
    }
    printf("S=");
    for (i = 1; i <= n - 1; i++)
    {
        printf("%d!+", i);
    }
    printf("%d!=%d", n, S);
    return (0);
}