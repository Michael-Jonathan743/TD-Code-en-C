#include <stdio.h>

int main()
{
    int i,n,s=0;
    printf("Veuillez saisir l'indice de la somme S=0+1+2+...+n:\nn: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        printf("%d + ",i-1);
    }
    printf("%d = %d",n,s);
    return (0);
}