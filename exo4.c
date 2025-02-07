#include <stdio.h>
int main()
{
    float a,b,s=0,m=0;
    printf("veuillez saisir la première note\n");
    scanf("%f",&a);
    printf("et la deuxième note :\n");
    scanf("%f",&b);
    s=a+b;
    m=s/2;
    printf("la somme est %.2f \nla moyenne générale de l' élève est %.2f\n",s,m);
    return (0);
}