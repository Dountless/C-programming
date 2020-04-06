#include<stdio.h>
int check(int);
int main()
{
	int k=35,z;
	z=check(k);
	printf("z=%d\n",z);
	return 0;
}
int check(int m)
{
	int m;
	if(m>40)
		return(!m++);
	else

		return(!++m);
}
