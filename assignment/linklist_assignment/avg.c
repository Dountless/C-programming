#include<stdio.h>
#include<stdlib.h>
int menu();
void insertnode();
struct node*creatnode();
void deletenode();
int sum=0,count=0;
void viewlist();
void avg();

int main()
{
    while(1)
    {
        switch (menu())
        {
             case 1:
                       insertnode();
                        break;
             case 2:
                            deletenode();
                            break;
             case 3:
                            avg();
                            break;
             case 4:
                        viewlist();
                        break;
             case 5:
                                exit(0);

             default:
                            printf("invalid choice");
                            break;
        }



     }
return 0;
}
int menu()
{
       int ch;
        printf("\n1.add list");
        printf("\n2.delete first node");
        printf("\n3.average of a list");
        printf("\n4.view list");
        printf("\n5.exit(0)");
        printf("\n\nenter your choice");
        scanf("%d",&ch);
        return ch;
}
struct node
{
    int info;
    struct node*link;
};
struct node*start=NULL;

struct node*creatnode()
{
    return((struct node*)malloc(sizeof(struct node)));
};
void insertnode()
{
    struct node*temp,*t;
    temp=creatnode();
    printf("enter a no.:");
    scanf("%d",&temp->info);
    sum=sum+temp->info;
    count=count+1;
    temp->link=NULL;
    if(start==NULL)
        start=temp;
     else
     {
            t=start;
            while(t->link!=NULL)
            {
                    t=t->link;
            }


                t->link=temp;
       }

}
void deletenode()
{
    struct node*r,*t;
    r=start;
    start=start->link;

    t=r;
    {
        sum=sum - (t->info);
        count--;
        t=t->link;
    }
    free(r);

 }
 void avg()

 {
     int c;
     c=sum/count;

    printf("\n\t\taverage of list is %d",c);
 }
 void viewlist()
 {

     struct node*c;

     if(start==NULL)
     {
         printf("list is empty");

     }
     else
     {
         c=start;
         while(c!=NULL)
         {
                      printf("[");

             printf("%d",c->info);
                      printf("]");

             c=c->link;
         }

     }
 }


