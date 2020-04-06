

						/*programe lcm and gcd of two number using recursion*/

#include<stdio.h>
int lcm(int,int,int);
int hcf(int,int,int);
int main()
{
	int i,a,b,c;
	printf("enter two no.:");
	scanf("%d%d",&a,&b);
	i=a<b?a:b;
	c=lcm(i,a,b);
	printf("L.C.M Is %d",c);
	c=hcf(i,a,b);
	printf("H.C.F is %d",c);

return 0;
}

int lcm(int i,int a,int b)
{
	

	int l;	
	if(i%a==0&&i%b==0)

		return i;


	l=a<b?a:b;	
	i=l+i; 
	lcm(i,a,b);	
	
}
int  hcf(int i,int a,int b)
{
	if(a%i==0&&b%i==0)
		return i;
	
	hcf(--i,a,b);
}
	
	
		
		
		
	
	

