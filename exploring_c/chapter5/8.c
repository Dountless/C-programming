#include<stdio.h>
int func(int);
int func1(int);

int main()
{
	int k=35,z;
	z=func(k);
	printf("z=%d\n",z);
	return 0;
}
int func(int m)
{
	++m;
	return(m=func1(++m));
}
int func1(int m)
{
	m++;
	return(m);
}
