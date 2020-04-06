#include<stdio.h>
int main()
{
	int i;
	for(i=-1;i<=10;i++)
	{
		if(i<5)
			continue;
		else
			break;
			printf("gets printed only once\n");
	}
return 0;
}
	
