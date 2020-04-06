#include<stdio.h>
int main()
{
	float a=0.7;
	double b=0.7;

	if(a==b)
		printf("condition satisfied\n");
	else
		printf("condition not satisfied\n");
	printf("a=%f b=%lf \n",a,b);
	return 0;
}
