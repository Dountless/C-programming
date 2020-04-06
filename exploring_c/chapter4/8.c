#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i*i>121)
			goto hlo;

		else
			printf("%d\n",i);
	}
	hlo:
		printf("deepak verma\n");
	return 0;
	}

