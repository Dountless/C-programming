#include<stdio.h>
void val();
int i=0;
int main()
{
	printf("man i=%d\n",i);
	i++;
	val();
	printf("man i=%d\n",i);
	
	val();
	return 0;
}
void val()
{
	i=100;
	printf("val =%d\n",i);
	i++;
}
