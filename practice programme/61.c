#include<stdio.h>
#define SUPPER(X) (X>=65&&X<=90)
#define OSUPPER(X) (X>=97&&X<=122)
#define LOWER(X) (SUPPER(X)||OSUPPER(X))

int main()
{
	char ch='+';
	if(LOWER(ch))
		printf("ch contain alphabate\n");
	else
		printf("ch not contain alphabate\n");
	return 0;
}
/*NOTE:-ascii value of '+' is 13*/	
