#include<stdio.h>
int main()
{
	int i=1;
	switch(i)
	{
		case 1:
			goto label;
			label:
	        case 2:
			printf("hhloooo\n");
		break;
	}
		printf("deepak\n");
	return 0;
}
