#include <stdio.h>

int main()
{
    int a,b,c,div;
    printf("Veuillez saisir deux entiers naturels non nul.\na: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    do 
    {
        div++;
        if(a%div==0 && b%div==0)
        {
            c=div;
        }
    }while(div<=a && div<=b);
    printf("PGCD(%d,%d)=%d\n",a,b,c);
    if(c==1)
    {
        printf("%d et %d sont premiers entre eux.",a,b);
    }
    else
    {
       printf("%d et %d ne sont pas premiers entre eux.",a,b);
    }
    return 0;
}