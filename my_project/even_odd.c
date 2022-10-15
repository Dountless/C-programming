#include<stdio.h>
void even(int,int);
void odd(int,int);
int main()
{
while(1)
{
	int i,n,c;
	printf("what type of no. you find:\neven:\tya\todd:\n");
	printf("for even press=1\tor\tfor odd press=2\n:");
	scanf("%d",&c);
	switch(c)
	{
	
		case 1:
		
			printf("enter two no.:");
			scanf("%d%d",&i,&n);
			printf("even no.:");
			even(i,n);
			break;
		 case 2:


                        printf("enter two no.:");
                        scanf("%d%d",&i,&n);
                        printf("odd no.:");
                        odd(i,n);
			break;
		default :
			printf("wrong enter");
                        break;
	}
}
return 0;
}


        void odd(int i,int n)

        {
           if(i==n)
           {
           }
           else
           {
           	if(i%2!=0)
          	 {
              		printf("%d\t",i);
           	}
          	 return odd(i+1,n);
           }
         }

	
        void even(int i,int n)
        {
		if(i==n)
		{
		}
		else
		{
			if(i%2==0)
			{	
				printf("%d\t",i);
			}
			return even(i+1,n);
		}
	}
	




        
        
        
        



















						 



