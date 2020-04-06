#include<stdio.h>
#define ISLOWER(a) (a>=97&&a<=127)
#define TOUPPER(a) (a-32)
int main()
{
	char ch='c';
	if(ISLOWER(ch))
		ch=TOUPPER(ch);
	printf("%c\n",ch);
	return 0;
}
