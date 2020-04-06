#include<stdio.h>
#define COND(a) if(a>=65&&a<=90)
int main()
{
	char ch='R';
	COND(ch)
		printf("UPPER CASE\n");
	else
		printf("LOWER CSE\n");
	return 0;
}
