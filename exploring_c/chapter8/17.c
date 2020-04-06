#include<stdio.h>
int main()
{
	static int a[]={2,4,6,8,10};
	int i;
	for(i=0;i<=4;i++)
	{
		*(a+i)=a[i]+i[a];
		printf("%d\n",*(a+i));
	}
	return 0;
}
