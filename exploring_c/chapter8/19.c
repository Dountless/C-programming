#include<stdio.h>
void change(int*);
int main()
{
	static int a[5]={2,3,4,5,6};
	int i;
	change(a);
	for(i=4;i>=0;i--)
		printf("%d\n",a[i]);
	return 0;
}
void change(int *b)
{
	int i;
	for(i=0;i<=4;i++)
	{
		*b=*b+1;
		b++;
	}
	
}
	
