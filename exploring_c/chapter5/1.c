#include<stdio.h>
float check(int);
int main()
{
	int i=45;
	float c;
	c=check(i);
	printf("c=%f\n",c);
	return 0;
}
float check(int ch)
{
	return(ch>=45?3.14:6.28);
}
