#include<stdio.h>
int fun(int);
int main()
{
	int y,s=2, t=5;
	y=fun(s+t);
	printf("s=%d t=%d y=%d\n",s,t,y);
	return 0;
}
int t=8;
int fun (int s)
{
	s++;
	t++;
	return(s+t);
}
