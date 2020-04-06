#include<stdio.h>
int main()
{
	static float arr[]={1.2,12,2.4,24,3.5,35};
	int i;
	for(i=0;i<=5;i++)
		printf("%f\n",arr[i]);
	return 0;
}
