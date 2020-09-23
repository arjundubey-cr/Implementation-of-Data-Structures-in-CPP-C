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
  void enqueue(int x);
  int dequeue();
  void display();
};

CircularQueue::CircularQueue(int size)
{
  this->size=size;
  front=0;
  rear=0;
  Q = new int[size];
}
