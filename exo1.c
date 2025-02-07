#include<stdio.h>
int main()
{
    int a;
    printf("entrer un entier\n");
    scanf("%d",&a);
    if(a>0)
        printf("le nombre est positif");
    else if (a<0)
        printf("le nombre est négatif");
    else
        printf("le nombre est nul"); 
    return (0);       
}