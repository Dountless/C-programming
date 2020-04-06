#include<stdio.h>
int main()
{
	int arr[]={0,1,2,3,4};
	int i,*p;
	for(p=arr,i=1;p+i<=arr+4;p++,i++)
		printf("%d\n",*(p+i));
	return 0;
}
