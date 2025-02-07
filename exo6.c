#include <stdio.h>
int main()
{
    float a,ca,b,cb,m,s;
    printf("Note 1:");
    scanf("%f",&a);
    printf("\t\tCoefficient:");
    scanf("%f",&ca);
    printf("\n Note 2:");
    scanf("%f",&b);
    printf("\t\tCoefficient:");
    scanf("%f",&cb);
    s=(a*ca)+ (b*cb);
    m=s/(ca+cb);
    printf("\nLa moyenne générale de l'élève est %.2f",m);
    return (0);
}