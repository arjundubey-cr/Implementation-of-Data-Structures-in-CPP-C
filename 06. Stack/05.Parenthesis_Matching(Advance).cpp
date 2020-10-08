#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Stack{
private:
  int size;
  int top;
  char *C;
  string str;
public:
  Stack(int size);
  ~Stack();
  void push(int x);
  int pop();
  bool isEmpty();
  bool isFull();
  bool checkParan(string expr);
};

Stack::Stack(int size){
  this->size=size;
  top=0;
  C=new char[size];
}

void Stack::push(int x){
  C[top]=x;
  top++;
}

int Stack::pop(){
  int x=-1;
  if(top==0)
    printf("isEmpty\n");
  else{
    x = C[top];
    --top;
  }
  return x;
}

bool Stack::isFull(){
  if(top==size-1)
    return true;
  else{
    return false;
  }
}
