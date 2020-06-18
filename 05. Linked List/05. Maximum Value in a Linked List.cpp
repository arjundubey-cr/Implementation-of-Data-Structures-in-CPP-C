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

int maxElement(struct Node *p)
{
	int max=INT_MIN;
	while(p){
		if(max<p->data)
			max=p->data;
		
		p=p->next;
	}
	return max;
}

int main()
{
	int A[] = {10, 9, 86, 7, 6, 45};
	create(A, 6);
	cout<<maxElement(first);
}
