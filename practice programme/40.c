#include<stdio.h>
int b[5];
int main()
{
	static int a[5];
	int i;
	for(i=0;i<=4;i++)
		printf("%d %d %d\n",i,b[i],a[i]);
	return 0;
}

