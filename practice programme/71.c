#include<stdio.h>
int add(int);
int main()
{
	int i=3,k,l;
	k=add(++i);
	l=add(i++);
	printf("i=%d k=%d l=%d\n",i,k,l);
	return 0;
}
int add(int ii)
{
	++ii;
	return ii;
}
