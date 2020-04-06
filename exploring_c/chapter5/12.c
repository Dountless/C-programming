#include<stdio.h>
int addsub(int,int);
int main()
{
	int i=10,j=20,k;
	k=addsub(i,j);
	printf("k=%d\n",k);
	return 0;
}
int addsub(int c,int d)
{
	int x,y;
	x=c-d;
	y=c+d;
	return(x,y);
}
	
