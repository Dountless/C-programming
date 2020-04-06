#include<stdio.h>
int main()
{
	int i;
	for(i=2;i<=10;i++)
	{
		switch(i)
		{
			case 2:
				printf("o");
				continue;
			case 3:
				break;
			case 4:
			case 5:
				printf("H");
				break;
			default:
				printf("!\n");
		}
	}
return 0;
}


