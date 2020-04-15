#include<stdio.h>
int f1(int);
int i=0;
int main()
{
	int j;
	for( ; ; )
	{
		if( j==f1(i) )
			printf("j=%d\n",j);
		else
			break;
	}
	return 0;
}
int f1 (int x)
{
	static int v=2;
	v--;
	return(v-x);
}
