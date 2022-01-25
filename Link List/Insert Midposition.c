//MIDDLE POSSITION INSERT NODE
#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};
struct node *head;

void createList(int n);

void displayList();


int main()
{
    int n, data,value,pos;

    printf("Enter a value and position\n");
    scanf("%d %d", &value,&pos);
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();
    insert_middle( value,pos);
    printf("\nData in the list \n");
    displayList();




    return 0;
}



void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));


    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {

        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;



        for(i=1; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));


            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void insert_middle(int value,int pos)
{
    struct node *newnode,*temp;
    int count=0;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        if(count==pos)
        {
            newnode->next=temp->next;
            temp->next=newnode;
        }
        temp=temp->next;
    }
}


void displayList()
{
    struct node *temp;


    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}