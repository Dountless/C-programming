#include<stdio.h>
int main()
{
	int x=1,y=5;
	y * =x;//syntax error due to space between '*'
	printf("x=%d\ny=%d\n",x,y);
	return 0;
}

