#include<stdio.h>
#define ISUPPER(X) (X>=65&&X<=90)
#define ISLOWER(X) (X>=97&&X<=122)
#define ISALPHA(X) (ISUPPER(X)||ISLOWER(X))
int main()
{
	char ch='+';
	
	if(ISALPHA(ch))
		printf("deepak\n");
	else
		printf("verma\n");
	return 0;
}
