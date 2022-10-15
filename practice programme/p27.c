#include<stdio.h>
int main()
{
	int k=35,*z,*y;	
	z=&k;
	y=z;
	*z++ = *y++;

	k++;								
	printf("k=%d z=%d y=%d\n",k,z,y);
	return 0;
	
}
