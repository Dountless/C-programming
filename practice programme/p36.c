#include<stdio.h>
int main()
{
        int i;
	printf("enter any no.:");
	scanf("%d",&i);

        switch(i)
        {
                case 1:
                        printf("deepak\t");
                case 2:
                        printf("verma\n");
                case 3:
                        printf("byy\n");
                default :
                        printf("ji\n");
        }
return 0;
}

