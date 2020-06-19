#include <iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
}*first=NULL;

void create(int A[], int n)
{
	struct Node *temp, *last;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=A[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void Display(struct Node* p){
	while(p)
	{
		printf("%d-> ", p->data);
		p=p->next;
	}
}

void concatenation(struct Node* p, struct Node *q)
{
	while(p)
		p=p->next;
	
	p->next=q;
	q=NULL;
}

int main()
{	
	int A[] = {3,5,5,6,8,8};
	create(A, 6);
	Display(first);
	printf("\n");
}
