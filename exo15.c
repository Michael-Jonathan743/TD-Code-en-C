#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n,i;
	int S=0;
	printf("Saisir l'indice de la somme: \n\tn: ");
	scanf("%d",&n);
	for (i=1; i<=n ; i++){
	    printf("10^%d+",i-1);
	}
	for (i=0; i<=n ; i++){
	    S=S+pow(10,i);
	}
	printf("10^%d=%d",n,S);
	return 0;
}