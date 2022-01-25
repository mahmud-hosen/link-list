#include<stdio.h> #define SIZE 5            /* Size of Stack */ int s[SIZE], top = -1; /* Global declarations */

int Sfull()  {  /* Function to Check Stack Full */  if (top == SIZE - 1)   return 1;  return 0; } int Sempty()  {   /* Function to Check Stack Empty */  if (top == -1)   return 1;  return 0; } void push(int elem) {     /* Function for PUSH operation */      if (Sfull())       printf("\nOverflow!!!!\n");      else    {       ++top;       s[top] = elem;      } }

