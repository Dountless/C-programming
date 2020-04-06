#include<stdio.h>
int main()
{


	float discount,order,amount;
	int mptyp;
	printf("for microprocessor=32,16,8\n");
	scanf("%d",&mptyp);
        char cus;
	cus=getchar();	
	printf("custumer typ:\nindustry=i,government=g,university=u\n:");
	scanf("%c",&cus);
	printf("order in amont:\n");
	scanf("%f",&order);
		
		if(mptyp==32)
		{
			if(cus=='i')
			{
				if(order<50000)
					discount=5;
				else
					discount=7.5;
				if(order>100000)
					discount=10;
			}
			
			if(cus=='g')
			{
				if(order<50000)
					discount=6.5;
				else
					discount=8.5;
				if (order>100000)
					discount=10;
			}
			if(cus=='u')
				discount=7.5;
		}
		if(mptyp==16)
		{
			if(order>10000)
			{
		
				if(cus=='i'||cus=='u')
			

				  
					discount=5;
				else
					discount=6;
			}
		}
		if(mptyp==8)
		{
			if(cus=='i'||cus=='g'||cus=='u')
	
				discount=10;
		}
		amount=order*(100-discount)/100;

		printf("custumer=%c microprossor=%d order=%f\n discount=%6.2f\n",cus,mptyp,order,discount);
                printf("net amount pay=%6.2f",amount);

		return 0;
}
		
		
