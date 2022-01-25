#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
int main()
{
	struct node n1,n2,n3,*p;
	struct node *n1 = (struct node n1*)malloc(sizeof(struct node n1));
	struct node *n2 = (struct node n2*)malloc(sizeof(struct node n2));
	struct node *n3 = (struct node n3*)malloc(sizeof(struct node n3));
     n1->data=5;
     n2->data=6;
     n->data=7;
     n1->next=&n2;
     n2->next=&n3;
     n3->next=NULL;
     p=&n1;
     while(p!=NULL)
	 {
	 	printf("%d\n",p->data);
	 	p=p->next;
	 }
     return 0;
}