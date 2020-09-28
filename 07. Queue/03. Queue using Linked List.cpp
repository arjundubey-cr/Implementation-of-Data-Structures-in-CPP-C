/**
1->2->3->4
*/



#include <iostream>
using namespace std;
class Node{
public:
  int data;
  Node *next;
};
class Queue{
private:
  Node *front;
  Node *rear;
public:
  Queue();
  ~Queue();
  void enqueue(int x);
  int dequeue();
  bool isEmpty();
  void display();
};
Queue::Queue(){
  front=nullptr;
  rear=nullptr;
}

//enqueue function
void Queue::enqueue(int x){
  Node *t=new Node;
  if(t==nullptr){
    cout<<"Queue Overflow\n";
  }
  else{
    t->data=x;
    t->next=nullptr;
    if(front==nullptr){
      front=t;
      rear=t;
    }
    else{
      rear->next=t;
      rear=t;
    }
  }
}
int Queue::dequeue(){
  int x=-1;
  Node *p;
  if(isEmpty())
  {
    cout<<"Queue UNderflow\n";
  }
  else{
    p=front;
    x=front->data;
    front=front->next;
    delete p;
  }
  return x;
}
bool Queue::isEmpty(){
  if(front==nullptr)  return true;
  return false;
}
Queue::~Queue(){
  Node *p=front;
  while(front)
  {
    front=front->next;
    delete p;
    p=front;
  }
}
void Queue::display(){
  Node *p=front;
  while(p){
    cout<<p->data<<flush;
    p=p->next;
    if(p!=nullptr){
      cout<<"<-"<<flush;
    }
  }
  cout<<endl;
}
int main()
{

}
