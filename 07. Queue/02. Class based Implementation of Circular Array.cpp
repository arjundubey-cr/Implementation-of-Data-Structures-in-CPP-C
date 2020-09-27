#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
private:
  int size;
  int front;
  int rear;
  int *Q;
public:
  CircularQueue(int size);
  ~CircularQueue();
  bool isFull();
  bool isEmpty();
  void enqueue(int x);
  int dequeue();
  void display();
};

CircularQueue::CircularQueue(int size){
  this->size=size;
  front=0;
  rear=0;
  Q = new int[size];
}
CircularQueue::~CircularQueue(){
  delete []Q;
}
bool CircularQueue::isFull(){
  if((rear+1)%size==front)
    return true;
  else
    return false;
}
void CircularQueue::enqueue(int x){
  if(isFull()){
    cout<<"Queue Overflow\n";
    return;
  }
  else{
    Q[rear]=x;
    rear=(rear+1)%size;
  }
}
bool CircularQueue::isEmpty(){
  if(front==rear)
  {
    return true;
  }
  return false;
}
int CircularQueue::dequeue(){
  int x=-1;
  if(isEmpty())
  {
    std::cout << "Queue Underflow" << '\n';
  }
  else{
    front=(front+1)%size;
    x=Q[front];
  }
  return x;

}
