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
    int n, data;


    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();




    return 0;
}



void createList(int n)
{
    struct node *temp2, *temp;
    int data, i;

    struct node temp=(struct node *)malloc(sizeof(struct node));


    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {

        printf("Enter the data of node 1: ");
        scanf("%d", &value);

        temp->data = value;
        temp->next = NULL;

        temp = head;



        for(i=2; i<=n; i++)
        {
            temp2 = (struct node *)malloc(sizeof(struct node));


            if(temp2 == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &value);

                temp2->data = value;
                temp2->next = NULL;

                temp->next = temp2;
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
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