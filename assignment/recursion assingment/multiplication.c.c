#include<stdio.h>
int mul(int,int,int);
int main()
{
	int a,i=1,b,m;
	printf("enter two no.:");
	scanf("%d%d",&a,&b);
	m=mul(i,a,b);
        printf("multiplication of %d and  %d  is %d",a,b,m);
	return 0;
}
int mul(int i,int a,int b)
{

	if(i>b) 
		return 0;
	else

	return(a+mul(++i,a,b));
}









	
