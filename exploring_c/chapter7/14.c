#include<stdio.h>
#define COND(a) a>=65&&a<=90
int main()
{
	char ch='R';
	if(COND(ch))
		printf("ch is upper case\n");
	else
		printf("ch is lower case\n");
	return 0;
}
