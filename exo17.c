#include <stdio.h>

int main()
{
    int n,i;
    float b,c,e;
    float j;
    b=1;
    c=0;
    j=1;
    printf("Saisir un nombre: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("1/(%d)! + ",i);
    }
    printf("1/(%d!) ",n);
    for(i=1;i<=n;i++)
    {
        b=b*(1/j);
        c=c+b;
        j++;
    }
    printf("= %f",c);
    return 0;
}