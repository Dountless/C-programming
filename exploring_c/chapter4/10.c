#include<stdio.h>
int main()
{
	int i,j,k;
	for(j=1;j<=4;j++)
	{
		if(j*j==16)
			goto secretplace;
	}
	for(i=1;i<=5;i++)
	{
		k=i*i;
		j=k+2;
		secretplace:
			printf("hy\n");
			printf("hlo\n");
			printf("dude\n");
	}
return 0;
}
