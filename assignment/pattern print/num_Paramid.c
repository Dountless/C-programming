#include<stdio.h>
int main()
{
        int i,j,l,row,column,k=1;
        printf("enter number of row:->");
        scanf("%d",&row);
        column=2*row-1;
        l=(column+1)/2;
        for(i=1;i<=row;i++)
        {	k=1;
                for(j=1;j<=column;j++)
                {
                        if(j>=((l+1)-i)&&j<=((l-1)+i))
                                printf("%d",k++);
                        else
                                printf(" ");
                }
                printf("\n");
        }
        return 0;
}
