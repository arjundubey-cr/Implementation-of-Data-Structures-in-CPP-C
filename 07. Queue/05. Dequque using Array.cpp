#include <iostream>
using namespace std;

class DEqueue{
private:
  int front;
  int rear;
  int size;
  int *Q;
public:
  DEqueue(int size);
  ~DEqueue();
  void display();
  void enqueueFront(int x);
  void enqueueRear(int x);
  int dequeueFront();
  int dequeueRear();
  bool isEmpty();
  bool isFull();
};

DEqueue::DEqueue(int size){
  this->size=size;
  front =-1;
  rear=-1;
  Q = new int[size];
  /*Q = (int *)malloc(sizeof(int)*size) if you're doing this in C*/
}
DEqueue::~DEqueue(){
  delete []Q;
}
void DEqueue::enqueueFront(int x){
  if(front==-1){
    cout<<"DEqueue Overflow @Front\n";
  }
  else{
    Q[front]=x;
    front--;
  }
}
bool DEqueue::isFull(){
  if(rear==size-1){
    return true;
  }
  return false;
}
void DEqueue::enqueueRear(int x){
  if(rear==size-1){
    cout<<"DEqueue Overflow @Rear\n";
  }
  else{
    Q[rear]=x;
    rear++;
  }
}
int DEqueue::dequeueFront(){
  int x=-1;
  if(isEmpty()){
    cout<<"Dequeue Underflow\n";
  }
  else{
    x=Q[front];
    front++;
  }
  return x;
}
int DEqueue::dequeueRear(){
  int x=-1;
  if(rear==-1){
    cout<<"Dequeue Underflow\n";
  }
  else{
    x=Q[rear];
    rear--;
  }
  return x;
}
