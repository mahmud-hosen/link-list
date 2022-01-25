#include <stdio.h>
#include <stdlib.h>

typedef struct mylist{

int data;
struct mylist *next;

}node;



void insert(node *s, int data)
{
    while(s->next != NULL)
    {
        s = s->next;
    }
    s->next = (node*) malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}



void display(node *s)
{
    while(s->next != NULL)
    {
        printf("%d -> ", s->next->data);
        s = s->next;
    }

    printf("NULL\n");
}



void search(node *s, int data)
{
    int count = 0;
    while(s->next != NULL)
    {
        if(s->next->data == data)
        {
            count++;
        }
        s = s->next;
    }
    printf("Total %d results found\n", count);
}




void deleteNode(node *s, int data)
{
    while(s->next != NULL)
    {
        if(s->next->data == data)
        {
            s->next = s->next->next;
            return 0;
        }
        s = s->next;

    }
}


void insertAfter(node *s, int search, int data)
{
    while(s->next != NULL)
    {
        if(s->next->data == search)
        {
            node *store = s->next->next;
            s->next->next = (node*) malloc(sizeof(node));
            s->next->next->data = data;
            s->next->next->next = store;
            return 0;
        }
        s = s->next;
    }
}


void insertAtBigining(node *s, int data)
{
    node *store = s->next;
    s->next = (node*) malloc(sizeof(node));
    s->next->data = data;
    s->next->next = store;
}





void countNode(node *s)
{
    int count = 0;
    while(s->next != NULL)
    {
        count++;
        s = s->next;
    }
    printf("Total %d nodes found.\n", count);
}




int main()
{
    node *first = (node*) malloc(sizeof(node));
    first->next = NULL;

    /* Inserting elements */
    insert(first, 5);
    insert(first, 9);
    insert(first, 11);
    insert(first, 9);

    /* Displaying inserted elements */
    display(first);

    /* Counting total elements */
    countNode(first);

    /* Searching specific element into LinkedList */
    search(first, 9);

    /* Search 11 and insert 44 after 11 */
    insertAfter(first, 11, 44);

    /* Deleting specific element */
    deleteNode(first, 9);

    /* Displaying inserted elements */
    display(first);

    /* Inserting beginning of all elements */
    insertAtBigining(first, 33);

    /* Displaying inserted elements */
    display(first);


}
