#include<stdio.h>
int main()
{
	 int *c;
	c=check(10,20);
	
	printf("c=%d\n",c);
	return 0;
}
int check (int i,int j)
{

	int *p,*q;
	p=&i;
	q=&j;
	return (i>=45?p:q);
}
