#include<stdio.h>
int main()
{
	static int c=5;
	printf("c=%d\n",c--);
	if(c)
		main();
	return 0;
}
