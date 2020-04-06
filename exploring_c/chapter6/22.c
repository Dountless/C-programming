#include<stdio.h>
void func1();

int main()
{

	printf("in main i=%d\n",i);
	func1();

	return 0;
}
int i=5;
void func1()
{

	printf("in func1 i=%d\n",i);
}
	

