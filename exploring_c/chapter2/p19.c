#include<stdio.h>
int main()
{
	int i=400000*400000/400000;//out of int range
	if(i==400000)
		printf("deepak");
	else
		printf("sea");
	return 0;
}
