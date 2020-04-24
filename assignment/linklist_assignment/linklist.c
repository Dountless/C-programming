#include<stdio.h>
#include<stdlib.h>
void insertnode();
void deletenode();
void viewlist();
struct node*creatnode();
int menu();
int menu1();
struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;
int sum=0;

int main()
{	
	int q;
	printf("\n1.sum of linklist programe:\n2.view linklist programe:\n\n\n\npress no.:");
	scanf("%d",&q);
while(1)
{
	switch(q)
	{
		case 1:
			
			
			switch(menu())
			{
				case 1:
					insertnode();
					break;
				case 2:
					deletenode();
					break;
				
				
				case 4:
					exit(0);	
					break;
				case 3:
					printf("\t\t\t\t\tsum of list is :%d",sum);
					break;	
				default:
					printf("invalid choice");
			}
			break;
		case 2:
			
			switch(menu1())	
			{
				case 1:
					insertnode();
					break;
				case 2:
					deletenode();
					break;
				case 3:
					viewlist();
					break;
				case 4:
					exit(0);
					break;
				default:
					printf("invalid choice");
			}
			break;
	}
}

	
return 0;
}
int menu()
{ 
	int ch;
	printf("\n\n\n1.add value to list");
	printf("\n2.delete first value to list");
	
	printf("\n3.sum of list");
	printf("\n4.exit");
	printf("\n\nenter your choice\n:");
	scanf("%d",&ch);
	return ch;
}
int menu1()
{
	int ch;
	printf("\n\n\n1.add list");
	printf("\n2.delete list");
	printf("\n3.view list");
	printf("\n4.exit");
	printf("\n\nenter a choice:");
	scanf("%d",&ch);
	return ch;
}



struct node*creatnode()
{
	return ((struct node*)malloc(sizeof(struct node)));
}
void insertnode()
{
	struct node*temp,*t;
	
	temp=creatnode();
	printf("enter a no.");
	scanf("%d",&temp->info);
	sum=sum+temp->info;
	temp->link=NULL;
	if(start==NULL)
	{	

		start=temp;
	}
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
	struct node*r;
	r=start;
	start=start->link;
	free(r);
}
void viewlist()
{
	struct node *c;
	if(start==NULL)
		printf("list is empty\n");
	else
	{
		c=start;
		printf("\t\t\t\t\tlist is -> ");
		while(c!=NULL)
		{
			printf("[");
			printf("%d",c->info);
			printf("]");
			c=c->link;
		}
	}

}

