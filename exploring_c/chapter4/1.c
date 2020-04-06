#include<stdio.h>
int main()
{
	int i ;
	printf("enter any no.");
	scanf("%d",&i);
	switch (i)
	{
		case 1:
			printf("Do\n");
		case 2:
			printf("Re\n");
		case 3:
			printf("me\n");
		case default:
			printf("deeepak");
	}
return 0;
}
