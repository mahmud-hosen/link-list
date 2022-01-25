#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void print()
{
	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}

}
void deletenode(int pos)
{
	if(pos==1)
	{
		struct node*temp;
		temp=head;
		head=head->next;
		free(temp);
	}
	else
	{
		int i;
		struct node*temp1;
		temp1=head;
		for(i = 1;i<=pos-2;i++)
		{

			temp1=temp1->next;
		}
		struct node *temp2;
			temp2=temp1->next;
			temp1->next = temp2->next;
		}

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
		int x,y,z,a,n,m;

		head=NULL;
		printf("Enter Insert Number\n");
		scanf("%d %d %d %d",&x,&y,&z,&a);
		insert(x);
		insert(y);
		insert(z);
		insert(a);
		print();
		printf("Enter Delete Node Number = \n");
		scanf("%d",&n);
		deletenode(n);
		print();
		printf("Enter Search Number = \n");
		//scanf("%d\n",&m);
		//search(m);
		return 0;
	}
