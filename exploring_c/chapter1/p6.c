#include<stdio.h>
int main()
{
	char ch=291;
	printf("%d\n%d\n%c\n",2147483648,ch,ch);// 1.it give error because 2147483648 is exeed for int range hence it dive apposite side valuse in (-) ,2.ch=291 it is exeed range of character then it give                                                    overflow value..,3.%c only print value chracter 
	return 0;                                 
}
