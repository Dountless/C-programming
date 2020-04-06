#include<stdio.h>
int increment();
int num;
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		j=increment();
		printf("j=%d\n",j);
	}
	
	printf("num=%d\n",num);
	return 0;
}
int increment()
{
	num++;
	return (num);
}

	
