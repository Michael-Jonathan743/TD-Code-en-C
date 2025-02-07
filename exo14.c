#include <stdio.h>
#include <math.h>

int main()
{
    int i,n;
    double p,s=0;
    printf("Veuillez saisir l'indice de la somme S= 1/1 + 1/2 + ... + 1/n\nn: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=pow(i,-1);
        s=s+p;
    }
    for(i=1;i<n;i++)
    {
        printf("1/%d + ",i);
    }
    printf("1/%d = %.2lf",n,s);
    return (0);
}