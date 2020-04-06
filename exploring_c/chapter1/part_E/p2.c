#include<stdio.h>
int main()
{
	int f;
	float c;
	printf("input value of ferrenheight");
	scanf("%d",&f);
	c=(5*((float)f-32))/9;
	printf("degree celcius is:%6.2f",c);
	return 0;
}
	
