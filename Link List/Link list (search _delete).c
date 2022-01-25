#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void print()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");


}
void insert(int value)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;


	}
	else
	{
		struct node *t;
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
}
	int main()
	{
		head=NULL;
		insert(12);
		insert(25);
		insert(54);
		print ();



return 0;
}