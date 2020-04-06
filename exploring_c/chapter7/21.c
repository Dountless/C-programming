#include<stdio.h>
#define ISLP(y) ((y%400==0)||(y%100!=0&&y%4==0))
int main()
{
	int y=1992;
	if (ISLP(y))
		printf("LEAP YEAR\n");
	else
		printf("NOTa leap\n");
	return  0;
}
