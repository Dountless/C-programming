#include<stdio.h>
int main()
{
	int i,k=1;
	here:
		if(k>2)
			goto out;
	
	there:
	
	
	for(i=1;i<=5;i++)
		printf("%d\n",i);	

	
	k++;
	goto there;
	
	out:;

	
	return 0;
}
