#include <bits/stdc++.h>

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


void recursiveDisplay(struct Node* p)
{
	if(p!=NULL)
	{
		recursiveDisplay(p->next);
		printf("%d  ", p->data);
	}
}
int main()
{
	int A[] = {3,5,7,10,25,8};
	create(A, 6);
	recursiveDisplay(first);
}
