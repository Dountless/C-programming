#include<stdio.h>
int main()
{
	char ch='E';
	switch(ch)
	{
		case (ch>=65&&ch<=90):
			printf("capital letter\n");
			break;
		case (ch>=97&&ch<=57):
			printf("small case latter");
			break;
		case (ch>=48&&ch<=57):
			printf("digit\n");
			break;
		default:
			printf("any other characte\n");
	}
return 0;
}

