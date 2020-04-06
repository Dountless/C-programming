#include<stdio.h>
int i=0;
void val();
int main()
{
	printf("in main i=%d\n",i);
	i++;
	val();
	printf("in main i=%d\n",i);
	return 0;
}
void val()
{
	int i=100;
	printf("in val i=%d\n",i);
	i++;
}
