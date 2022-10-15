#include<stdio.h>
int main()
{
	printf("%ld\n",sizeof(4)/sizeof(2.0));
/*sizeof() is  a compile time operator it is also unary operate*/  
	printf("%ld\n",sizeof(2.0)/sizeof(4));
	return 0;
}

