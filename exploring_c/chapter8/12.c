#include<stdio.h>
int main()
{
	int arr[25],i,c=0;
	for(i=0;i<=100;i++)
	{
		arr[i]=100;
		printf("%d\n",arr[i]);
		c=c+1;
	}
	printf("total c %d",c);
	return 0;
}
