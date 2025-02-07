#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, b, i = 1, r;
    ici:
    printf("Saisir deux entiers non nuls positifs.\n");
    printf("a: ");
    scanf("%u", &a);
    printf("b: ");
    scanf("%u", &b);
    if (a != 0 && b != 0 && a >= b)
    {
        r = a % b;
        while (r != 0)
        {
            r = a % b;
            a = b;
            b = r;
            i++;
        }
        printf("pgcd(a,b)=%u",a);
    }
    else if (a!=0 && b!=0 && a<b)
    {
        r = b % a;
        while (r!=0)
        {
            r = b % a;
            b = a;
            a = r;
            i++;
        }
        printf("pgcd(a,b)=%u",b);
    }
    else
    {
        printf("On a dit non nul!\nRéessayer\n");
        goto ici;
    }
    return (0);
}