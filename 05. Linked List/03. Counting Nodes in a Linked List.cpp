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

int nodeCount(struct Node *p)
{
	int counter=0;
	while(p)
	{
		counter++;
		p=p->next;
	}
	return counter;
}

int main()
{
	Node *temp;
	int A[] = {10, 9, 8, 7, 6, 45};
	create(A, 6);
	temp=first;
	cout<<nodeCount(temp)<<endl;
}
