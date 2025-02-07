#include<stdio.h>
int main()
{
    int a,b;
    baba:
    {
        printf("saisir deux nombres non nuls\n");
        scanf("%d",&a);
        scanf("%d",&b);
        if (a*b>0)
            printf("%d et %d ont le même signe",a,b);
        else if(a*b<0)     
            printf("%d et %d sont de signes différents",a,b);
        else 
            printf("veuillez respecter les conditions,\nRecommencer svp🤝!\n"); 
            goto baba;
    }    
    return (0);       
}