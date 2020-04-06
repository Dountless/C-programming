#include<stdio.h>
int recsum(int);
int main()
{
	int z,y;
	z=recsum(1);
	y=recsum(1);
	printf("z=%d\ny=%d\n",z,y);
	return 0;
}
int recsum(int i)
{
	static int sum=0;
	if(i==3)
		return sum;
	else
	{
		sum=sum+10;
		i++;
		recsum(i);
	}
}
