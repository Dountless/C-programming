#include<stdio.h>
int main()
{
	int arr[]={0,1,2,3,4};
	int i,*ptr;
	for (ptr=&arr[0];ptr<=&arr[4];ptr++)
		printf("%d\n",*ptr);
	return 0;
}
