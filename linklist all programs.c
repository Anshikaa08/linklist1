#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
}*p;
//addbeg function
void addbeg()
{
	struct node *temp;
	int d;
	scanf("%d",&d);
	if (p==NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->data=d;
		p->link=NULL;
	}
	else
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=d;
		temp->link=p;
		p=temp;
	}
}
//addend function
void addend()
{
	int d;
	scanf("%d",&d);
	struct node *temp;
	if(p==NULL)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p->data=d;
		p->link=NULL;
	}
	else
	{
		struct node *next,*temp;
		next=(struct node *)malloc(sizeof(struct node));
		temp=p;
		while(temp->link!=NULL)
		{
		temp=temp->link;
	}
		next->data=d;
		next->link=NULL;
		temp->link=next;
	}
}
//delbeg
void delbeg()
{
	if(p==NULL)
	{
		printf("LINKED LIST DOES NOT EXIST");
	}
	else
	{
		struct node *ptr;
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr=p;
		p=p->link;
		free(ptr);
			}
}
//delend function
void delend()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("list doesnot exist");
	}
	else
	{
		temp=p;
		struct node *prev;
		prev=(struct node *)malloc(sizeof(struct node));
		while(temp->link!=NULL){
			prev=temp;
			temp=temp->link;
		}
		prev->link=NULL;
		free(temp);
	}
}
//delete at position
void del_pos()
{
	int pos,c=0;
	scanf("%d",&pos);
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	struct node *prev;
	prev=(struct node*)malloc(sizeof(struct node));
	if (p==NULL)
	{
		printf("linked list doesn't exist");
	}
	else
	{
		if(pos==1)
		{
			temp=p;
			p=p->link;
			free(temp);
		}
		else
		{
			temp=p;
			while(temp->link=NULL)
			{
				c++;
				if(pos!=c)
				{
				prev=temp;
				temp=temp->link;
			}
			}
			prev->link=temp->link;
			free(temp);
		}
		
	}
}
void print()
{
	struct node *temp;
	temp=p;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}
void main()
{
	addbeg();
	addbeg();
	addend();
	addend();
	print();
}
