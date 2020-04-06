#include<stdio.h>

int main()
{
	int i,j;
	for(j=1;j<=10;j++)
	{
		for(i=1;i<=10;i++)
		{
			if(j<10)
				goto out;
		}
		printf("deeepak\n");
		printf("verma\n");
		printf("jii\n");
	}
	out :
		printf("dreamer boy");
		return 0;
	}
     
	
