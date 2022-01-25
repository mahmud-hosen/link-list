#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node* head;
int main()
{
	int x,a,b,c,d,f,e;
	head=NULL;
	printf("Enter Insert Number \n");
	scanf("%d  %d %d %d %d",&a,&b,&c,&d,&f);
    insert(f);
	insert(a);
	insert(b);
	insert(c);
	insert(d);


	printf("Insert Number \n");
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
		struct node*t;
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
}


