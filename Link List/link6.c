#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insert(int value)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{
		temp=head;
	}
	else
	{
		struct node*t;
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
}
void print()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

int main()
{
	head=NULL;
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	print();
	//deletenode(2);
	//deletenode();
	return 0;
}
