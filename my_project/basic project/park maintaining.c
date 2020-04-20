
		/*PROGRAMM TO MAINTAIN PARKING SYSTEM*/


#include<stdio.h>
#include<stdlib.h>
void two();//FUNCTION PROTOTYPE;
void three();//FUNCTION PROTOTYPE;
void four();//FUNCTION PROTOTYPE;
void menu();//FUNCTION PROTOTYPE;
void showdetail();//FUNCTION PROTOTYPE;
void delete();//FUNCTION PROTOTYPE;
int getchoice();//FUNCTION PROTOTYPE;

int notwo=0,nothree=0,nofour=0,count=0,amount=0;// GLOBEL DECLERATION;
int main()
{
        printf("\t\t-----:welcome to DV parking:----- \nmenue for choice:\n:");

        menu();//FUNCTION CALLING;

while(1)
{
    switch(getchoice())//FUNCTION CALLING IN SWITCH;
    {
        case 1:
                two();//FUNCTION CALLING;
                break;
        case 2:
                    three();//FUNCTION CALLING;
                    break;
        case 3:
                        four();//FUNCTION CALLING;
                        break;
        case 4:
                            showdetail();//FUNCTION CALLING;
                            break;
        case 5:
                                delete();//FUNCTION CALLING;
                                break;
         case 6:
                                    exit(0);//PREDEFINE FUNCTION IT WILL CLOSE PROGRAMM ;
          default:
                    printf("invalid choice");
     }


 }
 return 0;

}
void menu()  //FUNCTION DEFINITION;
{
   printf("\n\t\t\t\t1. for two wheeler and amount=20");
   printf("\n\t\t\t\t2. for three wheeler and amount=50");
   printf("\n\t\t\t\t3. for four wheeler and amount=100");
   printf("\n\t\t\t\t4. for show detail");
      printf("\n\t\t\t\t6 for close programm");


     printf("\nenter your choice\n:");

}
int getchoice()   //FUNCTION DEFINITION;
{
    int c;


   scanf("%d",&c);
   return c;
}
void showdetail()   //FUNCTION DEFINITION;
{
    printf("\n\t\t\t\t\t--:total record:--\n");
    printf("no.of two wheeler=%d\n",notwo);
    printf("no.of three wheeler=%d\n",nothree);
    printf("no.of four wheeler=%d\n",nofour);
    printf("total no.of vhichel=%d\n",count);
    printf("total no.of gain amount=%d\n",amount);
     printf("\n\t\t\t\tpress=5 for delete all detail");
   printf("\n\t\t\t\tpress 6 for close programm");
}
void delete()   //FUNCTION DEFINITION;
{
    printf("delete successfully:--");
    notwo=0;
    nothree=0;
    nofour=0;
    amount=0;
    count=0;
}

void two()   //FUNCTION DEFINITION;
{
    int am;
    printf("pay amount:");
    scanf("%d",&am);
    if(am==20)
    {

         printf("entry successfully\n:");
         notwo++;
         amount=amount+20;
         count++;
    }
    else
        printf("not valid please check menue and pay amount:\n\nnext:");

}
void three()   //FUNCTION DEFINITION;
{ int a;
    printf("pay amount:");
    scanf("%d",&a);
    if(a==50)
    {

         printf("entry successfully\n:");
         nothree++;
         amount=amount+50;
         count++;
    }
    else
        printf("not valid please check menue and pay amount:\n\nnext:");
}
void four()   //FUNCTION DEFINITION;
{ int m;
    printf("pay amount:");
    scanf("%d",&m);
    if(m==100)
    {

         printf("entry successfully\n:");
         nofour++;
         amount=amount+100;
         count++;
    }
    else
        printf("not valid please check menue and pay amount:\n\nnext:");
}




