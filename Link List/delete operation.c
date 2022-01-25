#include<stdio.h>
int main()
{
	int a[10],i,pos,num;
	printf("Enter Number of Element \n ");
	scanf("%d",&num);
	printf("Enter Number\n");
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Position Number\n");
	scanf("%d",&pos);
	for(i=pos-1;i<num-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<num-1;i++)
	{
		printf("Number %d \n",a[i]);
	}
	return 0;
}