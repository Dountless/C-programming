#include<stdio.h>
int main()
{
	int k=12,n=30;
	k=(k>5&&n=4?100:200);// it give l value error due to the 1&&n
	printf("k=%d\n",k);
	return 0;
}
	
