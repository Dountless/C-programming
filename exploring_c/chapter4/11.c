#include<stdio.h>
int main()
{
	int i;
	char j;
	printf("enter two no.\n");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
		printf("enter any alphabate\n");
		fflush(stdin);
		scanf("%c",&j);
		switch(j)
		{
			case 'a':
			printf("if u love something...\n");
			goto out;
			case 'b':
			printf("set it free...\n");
			break;
		}
		break;
		case 2:
		printf("if it return \n");
	}
	out:
		printf("fefeufgeufegfe");
	return 0;
}
