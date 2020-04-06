#include<stdio.h>
int superman(int,int);
int main()
{
	int p=23,f=24;
	superman(p,f);
	printf("p=%d f=%d\n",p,f);
	//printf("ans=%d",c);
	return 0;
}
int superman(int q,int h)
{
	q=q+q;
	h=h+h;
	return q;
	return h;
}


