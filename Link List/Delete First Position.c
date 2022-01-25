//DELLETE FIRST NODE
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};
struct node *head;

void createList(int n);

void displayList();


int main()
{
    int n, data, position,value;

printf("Enter a value\n");
scanf("%d", &value);
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();
    delete_first( value);
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



       for(i=2; i<=n; i++)
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
void delete_first( int value)
{
 // struct node *temp;
  //temp=head;
  if(head->data==value)
  {
      head=head->next;
  }
  //free(head);

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