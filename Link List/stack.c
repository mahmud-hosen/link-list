#include<stdio.h>
#define SIZE 5 /* Size of Stack */
int s[SIZE], top = -1; /* Global declarations */
int Sfull()
{
/* Function to Check Stack Full */
if (top == SIZE - 1)
return 1;
return 0;
}
int Sempty()
{
/* Function to Check Stack Empty */
if (top == -1)
return 1;
return 0;
}
void push(int elem)
{
/* Function for PUSH operation */
if (Sfull())
printf("\nOverflow!!!!\n");
else
{
++top;
s[top] = elem;
}
}

int pop()
{
/* Function for POP operation */
int elem;
if (Sempty())
{
printf("\nUnderflow!!!!\n");
return (-1);
}
else
{
elem = s[top];
top--;
return (elem);
}
}
void display() { /* Function to display status of Stack */
int i;
if (Sempty())
printf("Empty Stack\n");
else
{
for (i = 0; i <= top; i++)
printf("%d\n", s[i]);
printf("^Top");
}
}
int main() {
/* Main Program */
int opn, elem;
do {
printf("\n ### Stack Operations ### \n\n");
printf("\n Press 1-Push, 2-Pop,3-Display,4-Exit\n");
printf("\n Your option ? ");
scanf("%d", &opn);
switch (opn) {
case 1:
printf("\nRead the element to be pushed ?");
scanf("%d", &elem);
push(elem);
break;

case 2:
elem = pop();
if (elem != -1)
printf("\nPopped Element is %d \n", elem);
break;
case 3:
printf("\nStatus of Stack\n");
display();
break;
case 4:
printf("\nTerminating \n");
break;
default:
printf("\nInvalid Option !!! Try Again !! \n");
break;
}
printf("\nPress a Key to Continue . . . ");
} while (opn != 4);
}