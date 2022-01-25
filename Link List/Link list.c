#include<stdio.h>
struct stu
{
	int roll;
	char name[20];
	int age;
	struct stu *next;
};
int main()
{
	struct stu n1,n2,n3;
	struct stu *p;
	scanf("%d %s %d",&n1.roll,n1.name,&n1.age);
	scanf("%d %s %d",&n2.roll,n2.name,&n2.age);
	scanf("%d %s %d",&n3.roll,n3.name,&n3.age);
	p=&n1;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	while(p!=NULL)
	{
		printf("%d %s %d",p->roll,p->name,p->age);
		p=p->next;
	}
}