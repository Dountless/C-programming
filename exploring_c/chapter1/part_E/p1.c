#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter value of i,j:");
	scanf("%d%d",&i,&j);
	k=i+j-i%j;
	printf("next largest multiple is:%d",k);
	return 0;
}
