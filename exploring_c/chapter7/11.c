#include<stdio.h>
#define CUBE(X) (X*X*X)
int main()
{
	int a,b;
	b=3;
	a=CUBE(b++)/b++;
	printf("a=%d b=%d\n",a,b);
	return 0;
}
