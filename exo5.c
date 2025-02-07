#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2,x0,re,im;
    printf("Veuillez saisir les coefficients de l'équation ax²+bx+c=0\na: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    x1,x2,x0,re,im;
    delta=(b*b)-(4*a*c);
    x0=(-c)/b;
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    re=(-b)/(2*a);
    im=sqrt(-delta)/(2*a);
    if(a==0)
    {
        if(b==0 && c!=0)
        {
            printf("Il n.y a pas de solution dans IR");
        }
        else
        {
            printf("Ka solution est %.2f",x0);
        }
    }
    else
    {
        if(delta>0)
        {
            printf("L'équation admet deux solutions réelles:\nx1=%.2f\nx2=%.2f\n",x1,x2);
        }
        else if(delta==0)
        {
            printf("L'équation admet un racine double\nx1=x2=%.2f",re);
        }
        else
        {
            printf("L'équation admet deux solutions complexes:\nx1= %.2f + %.2fi\nx2= %.2f - %.2fi",re,im);
        }
    }
    return (0);
}