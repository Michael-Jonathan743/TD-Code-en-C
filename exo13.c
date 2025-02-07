#include <stdio.h>

int main()
{
    int i,n,f=1;
    ici:
    printf("Veuillez saisir un entier positif: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Recommencer en respectant la consigne\n");
        goto ici;
    }
    else if(n==1 || n==0)
    {
            printf("%d! = 1",n);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        for(i=1;i<n;i++)
        {    
            printf("%d * ",i);
        }
        printf("%d = %d",n,f);
    }
    return (0);
}