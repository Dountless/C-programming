#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter a no.:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		//sum=sum+1;
		i++;
	}
	if(i>5)
		printf("out of range");
	else

		printf("sum of digit is %d",i);
		return 0;
}

		
