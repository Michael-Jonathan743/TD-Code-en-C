#include <stdio.h>
int main()
{
    int a,b,c;
    printf("saisir \na=");
    scanf("%d",&a);
    printf("\nsaisir\nb=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nVoici les nouvelles données\n a=%d et b=%d",a,b);
    return (0);
}