#include <stdio.h>

int main()
{
    int n,i,d;
    printf("Saisir un nombre: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d=n%i;
        if(d==0)
        {
            printf(" %d",i);
        }
    }
    return (0);
}