#include<stdio.h>
#define ISLP(y) ((y%400==0)||(y%100!=0&&y%4==0))
int main()
{
	int y=1992;
	if(ISLP(y))
		printf("leap year\n");
	else
		printf("not a leap year");
	return 0;
}

