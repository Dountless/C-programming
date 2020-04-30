#include<stdio.h>
#include<stdlib.h>
struct node*creatnode();
void insertfirstnode();
void insertlastnode();
void deletefirstnode();
void deletelastnode();
void insertafternode();
void deletemiddlenode();
int menu();
void viewlist();
int main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:
                    insertfirstnode();
                    break;
            case 2:
                        insertlastnode();
                        break;
            case 3:
                        deletefirstnode();
                        break;
            case 4:
                        deletelastnode();
                        break;
            case 5:
                        viewlist();
                        break;
            case 6:
                            exit(0);
                            break;
            case 7:
                        insertafternode();
                        break;
            case 8:
                        deletemiddlenode();
                        break;



              default :
                        printf("invalid choice");
                        break;

        }
    }
return 0;


}
struct node
{
    int info;
    struct node *prev,*next;

};
struct node *start=NULL;

struct node *creatnode()
{
    return((struct node*)malloc(sizeof(struct node)));
}

void insertnode()
{


}
void insertfirstnode()
{
        struct node*temp;
        temp=creatnode();
        printf("enter a no.:");
        scanf("%d",&temp->info);
        temp->prev=NULL;
        temp->next=NULL;

        if(start==NULL)
        {
            start=temp;
        }
        else
        {
            start->prev=temp;
            temp->next=start;
            start=temp;

        }
}

void insertlastnode()
{
    struct node *temp,*t;
        temp=creatnode();
       printf("enter a no.:");
       scanf("%d",&temp->info);
       temp->prev=NULL;
       temp->next=NULL;

       if(start==NULL)
       {
            start=temp;
       }
       else
       {
                t=start;
                while(t->next!=NULL)
                {
                    t=t->next;
                }
                 temp->prev=t;
                t->next=temp;

                temp->next=NULL;

        }

}

void deletefirstnode()
{
    struct node*r;
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        r=start;



        start=start->next;
        free(r);
        start->prev=NULL;

    }
}
void deletelastnode()
{
        struct node *r,*t,*c;
        if(start==NULL)
        {
            printf("list is empty");
        }
        else
        {
            t=start;

            while(t->next!=NULL)
            {
                t=t->next;
             }
             r=t;
             t=t->prev;
             if(t==NULL)
             {

                 free(r);
                 start=NULL;

             }
             else
             {
                  t->next=NULL;

                   free(r);
             }



         }

 }

void viewlist()
{
    struct node *t;
    if(start==NULL)
    {
        printf("list is empty");

    }
    else
    {
        t=start;
        while(t->next!=NULL)
        {
            printf("[");
            printf("%d",t->info);
            printf("]");
            t=t->next;
         }
          printf("%d",t->info);

    }
}
void insertafternode()
{
    struct node *t,*n;
    int a;
    printf("enter no. to add after node ");
    scanf("%d",&a);
    t=start;
    while(t->info!=a)
    {
        t=t->next;
    }
    n=creatnode();
    printf("enter a no. to add list in middle");
    scanf("%d",&n->info);
    n->prev=NULL;
    n->next=NULL;
    n->next=t->next;
    n->prev=t;
    t=t->next;
    t->prev=n;
    t=n->prev;
    t->next=n;




}
void deletemiddlenode()
{
     struct node *t,*r;
    int a;
    printf("enter no. to delete in middle ");
    scanf("%d",&a);
    t=start;
    if(t->info==a)
        t=t->next;
    while(t->info!=a)
    {
        t=t->next;
    }
  {


    r=t;
    t=t->next;
    t->prev=r->prev;
    t=r->prev;
    t->next=r->next;


    free(r);
  }
}

int menu()
{
    int ch;
    printf("\n1.insert first node");
    printf("\n2.insert last node");
    printf("\n3.delete first node");
    printf("\n4.delete last node");
    printf("\n5.view list");
    printf("\n6.exit");
    printf("\n7.insert afternode");
    printf("\n8.delete middle node");
    printf("\n\t\tenter your choice");
    scanf("%d",&ch);
    return(ch);



}
