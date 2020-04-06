#include<stdio.h>
int main()
{
	int p,q;
	scanf("enter value of p and q %d%d",&p,&q);
/*scanf() behave erratially because we input too many arguments in " "*/
	printf("p=%d q=%d\n",p,q);
	return 0;
}
	
