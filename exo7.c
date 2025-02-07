#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, max=0, T[]={5,9,7};
	int *p;
	p=T;
	for(i=0;i<3;i++)
	{
	    if(T[i]>T[i+1])
	    {
	        *p=T[i];
	        max=*p;
	    }
	    else 
	    {
	        *p=T[i+1];
	        max=*p;
	    }
	}
	    printf("Le max est %d",max);
	return (0);
}