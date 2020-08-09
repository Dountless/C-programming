#include<stdio.h>
void f1(int,int);
void f2(float,int);
int main()
{
	float a=3.14;
	int i=99;
	f1(i,a);
	f2(a,i);
	return 0;
}
void f1 (int i,int a)
{
	printf("i=%d a=%f\n",i,a);
	printf("a=%f i=%d\n",a,i);
	
}
void f2 (float a,int i)
{
	printf("a=%f i=%d\n",a,i);
	printf("i=%d a=%f\n",i,a);
}	

