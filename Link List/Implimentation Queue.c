#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=0,rear=0;
int menu();
void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    printf("\nQueues using Arrays\n");
    do
    {
        ch=menu();
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default:
               printf("\n Please enter a valid choice!!");
        }
    }while(1);
}int menu()
{
	int ch;
	printf("1.Enqueue\n 2.Dequeue \n 3. Display \n 4.Exit \n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	return ch;
}
void enqueue()
{
	int element;
	if(rear==max)
	{
		printf("Over flow\n");

	}
	else
	{
		printf("Enter your element\n");
		scanf("%d",&element);
		queue[rear++]=element;
		printf("%d enqued at %d",element,rear);
	}
}
void dequeue()
{
	if(rear==front)
	{
		printf("under flow\n");
	}
	else
	{
		front++;
		printf("Element is dequeued %d",front);
	}
}
void display()
{
	int i;
	if(front==rear)
	{
		printf("Queue is empty!!!");
	}
	else
	{
		for (i=front;i<max;i++)
		{
			printf("|%d",queue[i]);
		}
		printf("|");
	}
}