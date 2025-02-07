#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Veuillez saisir un entier supérieur à 1: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf(" %d",i);
        i++;
    }
    return (0);
}