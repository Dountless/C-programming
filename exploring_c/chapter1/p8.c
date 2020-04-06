#include<stdio.h>
int main()
{
	int a=123456789999;
	float b=3.4e100;
	printf("a=%d\nb=%f\n",a,b);
	printf("%d\n%d\n",sizeof (a),sizeof (b));
	return 0;
}

