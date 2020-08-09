#include<stdio.h>
#define P(format,var) printf("%formt\n",var)
int main()
{	
	int i=3;
	float a=3.14;
	P(d,i);
	P(f,a);
	return 0;
	
}
