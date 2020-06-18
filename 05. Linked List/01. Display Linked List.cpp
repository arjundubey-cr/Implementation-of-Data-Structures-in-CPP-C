#include <bits/stdc++.h>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

int main()
{
	int A[] = {3, 5, 7, 10, 15};	
	
	Node* head = new Node;
	Node* temp;
	Node* last;
	
	head->data = A[0];
	head->next = NULL;
	last = head;
	
	int len=sizeof(A)/sizeof(A[0]);
	for(int i=1; i<len; i++)
	{
		//allocating memory for temporary node
		temp = new Node;
		
		//assigning the value from array to the value of temp Node
		temp->data=A[i];
		//making the temp Node point to Null
		temp->next=NULL;
		//pointing the previous node to the new Node
		last->next=temp;
		//assigning pointer last to temp
		last=temp;
	}
	
	Node* p = head;
 
    while (p != nullptr){
        cout << p->data << " -> " <<flush;
        p = p->next;
    }
 
	
	
}
