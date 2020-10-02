#include <iostream>
using namespace std;

struct Node{
  Node *rear;
  int data;
  Node *next;
};
Node* front;
Node* rear;
void enqueue(int x){
  Node *t=new Node;
  if(t==nullptr)
    cout<<"Queue is Full"<<endl;
  else{
    t->data=x;
    t->next=nullptr;
    if(front==nullptr)  front=rear=t;
  }
}
int main()
{

}
