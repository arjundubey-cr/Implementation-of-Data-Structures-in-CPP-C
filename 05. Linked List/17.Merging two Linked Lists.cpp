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

void create2(int B[], int n)
{
	struct Node *temp, *last;
	second = (struct Node*)malloc(sizeof(struct Node));
	second->data=B[0];
	second->next=NULL;
	last=second;
	
	for(int i=1;i<n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=B[i];
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

void Merge(struct Node* first, struct Node* second){
	struct Node *last;
	if(first->data < second->data){
		third=last=first;
		first=first->next;
		last->next=NULL;
	}
	else{
		third=last=second;
		second=second->next;
		third->next=NULL;
	}
	while(first&&second)
	{
		if(first->data<second->data)
		{
			last->next=first;
			last=first;
			first=first->next;
			last->next=NULL;
		}
		else{
			last->next=second;
			last=second;
			second=second->next;
			last->next=NULL;
		}
	}
	
	
	first!=NULL?last->next=first:last->next=second;
}

int main()
{	
	int A[] = {3,5,5,6,8,8};
	int B[] = {2,3,4,5,6,7};
	
	create(A, 6);
	create2(B, 6);
	
	Merge(first, second);
	Display(third);
	printf("\n");
}
