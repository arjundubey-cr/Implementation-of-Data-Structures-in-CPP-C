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

int linearSearch2(struct Node *p, int val)
{
	int index=1;
	struct Node* q;
	while(p)
	{
		if(p->data==val)
		{
			q->next=p->next;
			p->next=first;
			first = p;
			return index;
		}
		q=p;
		p=p->next;
		index++;
	}
	return -1;
}

int main()
{
	int num;
	int A[] = {10, 9, 86, 7, 6, 45};
	create(A, 6);
	printf("Enter the element to search for:\n");
	scanf("%d",&num);
	
	int index=linearSearch2(first, num);
	if(index!=-1)
		printf("Found at Index= %d", index);
	else
		printf("Element not present in the Linked List");
}
