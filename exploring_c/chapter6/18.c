#include<stdio.h>
int function(int);
int i;
int main()
{
	int j;
	for( ; ;)
	{
		if(j=function(i))
			printf("j=%d\n",j);
		else
			break;
	}
	return 0;
}
int function(int x)
{
	static int v=2;
	v--;
	return(v-x);
}
