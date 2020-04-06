#include<stdio.h>
int main()
{
	int i=1;
	if(!i)
		printf("recursive call are real pain\n");
	else
	{
		i=0;
		printf("recursive call are challanging\n");
		main();
	}
	return 0;
}
