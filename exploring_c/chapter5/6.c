#include<stdio.h>
int function(int,int);
int main()
{
	int i=135,a=135,k;
	k=function(!++i,!a++);
	printf("i=%d a=%d k=%d\n",i,a,k);
	return 0;
}
int function (int j,int b)
{
	int c;
	c=j+b;
	return c;
} 
