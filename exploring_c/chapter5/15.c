#include<stdio.h>
void pri(int,float);
void printit(float,int);
int main()
{
	float a=3.14;
	int i=99;
	pri(i,a);
	printit(a,i);
	return 0;
}
void pri(int i,int a)
{
	printf("i=%d a=%f\n",i,a);
	printf("a=%f i=%d\n",a,i);
}
void printit(float a,int i)
{
	printf("a=%f i=%d\n",a,i);
	printf("i=%d a=%f\n",i,a);
}

