#include <iostream>
using namespace std;

//Defining class for a single Node
class Node{
	public:
		int data;
		Node *next;
};

//Defining class for Linked List
class LinkedList{
	private:
		Node* first;
	public:
		//Defining constructor for linked
		LinkedList(){first=NULL;}
		LinkedList(int A[], int n);
		
		//Defining destructor for linkedlist to delete linked list
		~LinkedList();
		
		//Defining Basic Linked List Function
		void Display();
		void Insert(int index, int data);
		int Delete(int index);
		int Length();
};

LinkedList::LinkedList(int A[], int n)
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

LinkedList::~LinkedList()
{
	Node *p=first;
	while(first)
	{
		first=first->next;
		delete p;
		p=first;
	}
}

LinkedList::Display()
{
	Node *p=first;
	while(p)
	{
		printf("%d-> ", p->data);
		p=p->next;
	}
}

LinkedList::Insert(int index, int data)
{
	
}

int main()
{	
	int A[] = {3,5,5,6,8,8};
	LinkedList l(A, 5);
	l.Insert(3, 10);
	l.Display();
	return 0;
}
