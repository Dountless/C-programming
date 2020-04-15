#include<stdio.h>
int f1(int);
int main()
{
	int z,y;
	z=f1(1);
	y=f1(1);
	printf("z=%d y=%d\n",z,y);
	return 0;
}
int f1(int i)
{
	static int sum=0;

	if(i==3)
		return sum;
	else
	{
		sum=sum+10;
		i++;
		f1(i);
	}
}
	
