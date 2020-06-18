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

void Delete(int pos){
	struct Node *p=first;
	struct Node *q = NULL;
	
	if(pos!=1){
		
		for(int i=0;i<pos-1;i++){
			q=p;
			p=p->next;
		}
		if(p)
		{
			q->next=p->next;
			delete p;
		}
	}
	else{
		p=first;
		first=first->next;
		delete p;
	}
	
	
}
int main()
{	
	int A[] = {3,5,7,10,25,8};
	create(A, 6);
	Display(first);
	printf("\n");
	Delete(3);
	Display(first);
	printf("\n");
}
