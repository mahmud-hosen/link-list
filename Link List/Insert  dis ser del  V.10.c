#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node* head;
int main()
{

	head=NULL;

	int n,e,x;
	printf("Enter the node number = \n");
	scanf("%d",&n);
	creatnode(n);
	printf("Total Create Node \n");
	print();
	printf("Enter Delete Node Number \n");
	scanf("%d",&e);
	deletenode(e);
	printf("Delete Node \n");
	print();
	printf(" Enter Search Node Value \n");
	scanf("%d",&x);
	searchnode(x);

	return 0;

}

void print()
{
   int c=0;
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
        c++;
	}
	printf(" Total Node = %d\n",c);


    printf("\n");
}


void deletenode(int pos)
{

	if(pos==1)
	{
		struct node *temp;
	    temp=head;
		head=temp->next;
		free(temp);
	}
	else
	{
		int i;
		struct node *temp;
		temp=head;
		for(i=1;i<=pos-2;i++)
		{
			temp=temp->next;
		}
		struct node*temp2;
		temp2=temp->next;
		temp->next=temp2->next;
		free(temp2);

	}
}
void searchnode(int x)
	{

	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{

		if(temp->data==x)
		{
			printf("Found and this number is %d  \n",x);
	    }
	    else
		{
	    printf ("Not Found %d this node \n",x);

	    }
	    temp=temp->next;

	}


	}
void creatnode(int n)
{
	int value,i;
	struct node *temp,temp2;
	head=(struct node*)malloc(sizeof(struct node));
	temp=head;
	if(head==NULL)
	{
		printf("Unable Memory\n");
	}
	else
	{
		printf("Enter Node 1 Data = \n");
		scanf("%d",&value);
		temp->data=value;
		temp->next=NULL;
		temp=head;
		for(i=2;i<=n;i++)
		{
			struct node*temp2=(struct node*)malloc(sizeof(struct node));
			if(temp2==NULL)
			{
				printf("Unable memory");

			}
			else
			{
				printf("Enter Node %d Data = \n",i);
				scanf("%d",&value);
				temp2->data=value;
				temp2->next=NULL;
				temp->next=temp2;
				temp=temp->next;

			}
		}
	}

}
