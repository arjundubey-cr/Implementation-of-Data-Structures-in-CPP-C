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
void removeDuplicates(struct Node* p){
	struct Node* q;
	while(p)
	{
		if(p->data!=q->data)
		{
			q=p;
			p=p->next;
		}
		else{
		q->next=p->next;
		delete p;
		p=q->next;
		}
			
	}
}


int main()
{	
	int A[] = {3,5,5,6,8,8};
	create(A, 6);
	Display(first);
	printf("\n");
	removeDuplicates(first);
	Display(first);
}
