#include<stdio.h>
#define AND &&
#define OR ||
#define LE <=
#define GE >=
int main()
{
	char ch='D';
	if ((ch GE 65 AND ch LE 90) OR ( ch GE 97 AND ch LE 122))
		printf("alphabate\n");
	else
		printf("not an alphabate\n");
	return 0;
}
