#include<stdio.h>
int main()
{
        int i,j,k=65,row,column;
        printf("enter a number of row;->");
        scanf("%d",&row);
        column=2*row-1;
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=column;j++)
                {
                        if(j<=i)
                                printf("%c",k++);
                        else
                                printf(" ");
                }
                printf("\n");
        }
        return 0;
}
