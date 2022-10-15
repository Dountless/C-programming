                                       
        					                                   /*CALCULATOR*/

	/*NOTE:--to execute this programe -lm command use after gcc (programe name) because -lm tell math.h header file are included in this programe */ 


	#include<stdio.h>   //header file
	#include<math.h>     //header file include sqrt() function in this programm 
	int add(int,int);   //function decleration
	int mul(int,int);   //function decleration

	int sub(int,int);   //function decleration

	float divi(float,float); //function decleration
	int mod(int,int);        //function decleration
	int main()
{
		int a,b,A,S,M,MO,n,q;   //variable decelration
		float D,roota,rootb;  //variable declration
		int c;                //variable declration
		again:
		printf("you want to enter your choice + - * / %% \nthen press 1\nyou want to get square root\n then press 2\n");
		scanf("%d",&c);
		
		

					/*SWITCH CASE START IT GIVE TWO option*/ 																		
	
		  switch(c)                     
		  {	
			     case 1:
				while(1)
				{
					
		                  printf("enter two value\n:");
		                  scanf("%d%d",&a,&b);
		                  char ch;
		                  ch=getchar();    //getchar() IS A FUNCTION IT USE GET SINGLE CHARACTER
		                  printf("enter your choice= + ,- *, /, %%\n:");
	                          	scanf("%c",&ch);
		
		
		
                 		/*MULTIPLE SELECTION AND CALLING FUNTION WITH PASS BY VALUE AS a,b */
		
		                   if(ch=='+')
		                    {
			               A=add(a,b); //FUNCTION CALL
                  			printf("addtion is:%d\n",A);
	                       	     }
	                       	else if(ch=='-')
		                  {
		                     S=sub(a,b);  //FUNCTION CALL
		                       printf("substraction is:%d\n",S);
		                  }
                		else if(ch=='*')
		                  {
			              M=mul(a,b);  //FUNCTION CALL
			              printf("multiplication is:%d\n",M);
                      		  }
 	                	else if(ch=='/')
		                  {
			             D=divi(a,b);  //FUNCTION CALL
			             printf("division is :%6.2f\n",D);
		                  }
		                   else if(ch=='%')
		                   {
		                 	MO=mod(a,b);  //FUNCTION CALL
		                	printf("modulus is :%d\n",MO);
		                   }

				
                                 else
                                        printf("wrong choice\n");
                                              break;
					if(q==9)
						goto again;
				}
					  
                               case 2:

                                      printf("enter a no. and u get square root\n:");
                                       scanf("%d",&n);
					
                                      roota=sqrt(n);   //SQUARE ROOT FUNCTION IT GIVE SQUARE ROOT OF USER NO.
                                      printf("square root of a is:%6.2f",roota);
                                                break;

                    }   
			         
	


return 0;
}
		
					/*FUNCTION DEFINE WITH ARGUMENT AND WITH RETURN TYPE*/

			int add(int p,int q)
			{
        			return(p+q);
			}
			int mul(int p,int q)
			{
        			return(p*q);
			}
			int sub(int p,int q)
			{
				        return(p-q);
			}
			float divi(float p,float q)
			{
			        return((float)p/q);
			}
			int mod(int p,int q)
			{
			        return(p%q);
			}





                                      
                                      
                                      

	
	
				






























	








	
 			







	
	
		



		

                

		




























	

	
	
