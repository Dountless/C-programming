#include<stdio.h>
int main()
{
	int i=-4,j,num=10;
	j=i%-3;
	j=(j?0:num*num);
	printf("j=%d\n",j);
	return 0;
}
