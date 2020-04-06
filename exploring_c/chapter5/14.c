#include<stdio.h>
void printit(char,char);

int main()
{
	char a=65,ch='C';
	printit(a,ch);
	return 0;
}
void printit( a, ch)
{
	printf("a=%d ch=%c\n",a,ch);
}	
	
