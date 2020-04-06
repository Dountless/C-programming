#include<stdio.h>
#define COND (a>=65&&a<=90)
int main()
{
	char a='R';
	if(COND)
		printf("UPPER CASE\n");
	else
		printf("LOWER CASE\n");
	return 0;
}



