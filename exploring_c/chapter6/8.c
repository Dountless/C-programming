#include<stdio.h>
void change();
int main()
{
	auto int i=10;
	register int j=20;
	printf("mains i and j are %d %d\n",i,j);
	change();
	printf("mains i and j are %d %d\n",i,j);
	return 0;
}
void change()
{
	auto int i=100;
	register int j=200;
	printf("changs i and j are %d %d\n",i,j);
}

