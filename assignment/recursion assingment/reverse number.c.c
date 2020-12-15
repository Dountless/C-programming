#include<stdio.h>
int rev(int);
int main()
{
	int n,x;
	printf("enter a no.:");
	scanf("%d",&n);
	x=rev(n);
	printf("reverse no. is %d",x);
	return 0;
}
int rev(int n)
{
	static int r,y=0;
	if(n==0)
		return y;
	else
	{
		r=n%10;
		y=y*10+r;
		rev(n/10);
	}


}
