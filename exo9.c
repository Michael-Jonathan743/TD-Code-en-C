#include <stdio.h>

int main()
{
    int a,i,p;
    printf("Saisir un nombre: ");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        p=i%2;
        if(p==0)
        {
            printf(" %d",i);
        }
    }
    return (0);
}