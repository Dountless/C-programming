
/*WAP to roundoff a intiger i to next largest multiple of another intiger j.*/


#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter two value :");
	scanf("%d%d",&i,&j);
	k=i+j-i%j;
	printf("next multiple this no.%d  is : %d",j,k);
	return 0;
}
