#include<stdio.h>
void val();
int i=10,j=20,k=30;
int main()
{
	int i=1,j=2,k=3;
	printf("i=%d j=%d k=%d\n",i,j,k);
	val();
	return 0;
}
void val()
{
	printf("i=%d j=%d k=%d\n",i,j,k);
}
