#include <iostream>
#include <limits.h>
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


bool isSorted(struct Node* p){
	int x = INT_MIN;
	while(p!=NULL)
	{
	if(p->data<x)
	{
		return false;
	}
	x=p->data;
	p=p->next;
	}
	return true;
}

int main()
{
	int A[] = {1,5,2,4,3,6};
	create(A, 6);
	if(isSorted(first))
	cout<<"true"<<"\n";
	else
	cout<<"false"<<"\n";

}
