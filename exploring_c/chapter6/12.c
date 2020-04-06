#include<stdio.h>
void val();
int i=0;
int main()
{
	printf("mans i=%d\n",i);
	i++;
	val();
	printf("mains i=%d\n",i);

	val();
	return 0;
}
void val()
{
	i=100;
	printf("vals i=%d\n",i);
	i++;
}

