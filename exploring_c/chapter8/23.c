#include<stdio.h>
int main()
{
	int arr[]={0,1,2,3,4};
	int i,*ptr;
	for(ptr=arr+4;ptr>=arr;ptr--)
		printf("%d\n",*ptr);
	return 0;
}
