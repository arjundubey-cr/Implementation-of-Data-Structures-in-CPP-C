#include <iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
}*first=NULL, *second=NULL, *third=NULL;

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

int isLoop(Node *f)
{
	Node *p,*q;
	p=q=f;
	do
	{
		p=p->next;
		q=q->next;
		q=q?q->next:q;
	}while(p && q && p!=q)
	
	return p==q?1:0;
}

void Display(struct Node* p){
	while(p)
	{
		printf("%d-> ", p->data);
		p=p->next;
	}
}


int main()
{	
	int A[] = {3,5,5,6,8,8};
	
	create(A, 6);
	/***
	 * Create a Loop
	****/
	t1=first->next->next;
	t2=first->next->next->next->next;
	t2->next=t1;
	
	printf("%d\n", isLoop(first));
	return 0;
}
