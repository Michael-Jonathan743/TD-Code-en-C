#include <stdio.h>

int main()
{
	int a,b,c,max;
 printf("Veuillez saisir trois nombres: \na: ");
 scanf("%d",&a);
 printf("b: ");
 scanf("%d",&b);
 printf("c: ");
 scanf("%d",&C);
 if ( a < c && b < c )
 {
     max=c;
 }
 else if ( a < b && c < b )
 {
     max=b;
 }
 else if ( b < a && c < a)
 {
     max=a;
 }
	    printf("Le maximum est %d",max);
	return (0);
}