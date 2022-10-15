#include<stdio.h>
int main()
{
	int i,j,k;
	for(j=1;j<=4;j++)
	{
		if(j*j==16)
			goto lebel;
	}
	for(i=1;i<=5;i++)
	{
		k=i*i;
		j=k+2;
		lebel:
			printf("deepak\n");
			printf("verma\n");
			printf("ji\n");
	}
	return 0;
}

