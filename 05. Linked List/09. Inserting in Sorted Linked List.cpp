#include <bits/stdc++.h>

using namespace std;

int counter=0;
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


void Insert(struct Node *p, int val)
{
	struct Node *t;
	struct Node *q;
	
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data=val;
	
	while(p->data<val&&p){
		q=p;
		p=p->next;
	}
	t->next=p;
	q->next=t;
	
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
	int A[] = {3,5,7,10,25,8};
	create(A, 6);
	Insert(first, 4);
	Display(first);
}
