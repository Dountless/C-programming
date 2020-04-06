#include<stdio.h>
int add(int);
int main()
{
	int i=3,j;
	j=add(i++);
	printf("i=%d j=%d\n",i,j);
	return 0;
}
int add(int ii)
{
	ii++;
	printf("ii=%d\n",ii);
}

