#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Queue {
  /* data */
  int size;
  int front;
  int back;
  int *Q;
};

void create(struct Queue *q, int size)
{
  q->size=size;
  q->front=q->back=-1;
  q->Q=(int *)malloc(q->size*sizeof(int));
}

//Display FUNCTION DISPLAY ALL ELEMENT INSIDE QUEUE
void Display(struct Queue q)
{
  int i;
  for(i=q.front+1; i<=q.back;i++)
    printf("%d\n", q.Q[i]);
  printf("\n");
}

// DEQUEUE FUNCTION REMOVE ELEMENT FROM FRONT
int dequeue(struct Queue *q)
{
  int x=-1;
  if(q->front==q->back)
    return -1;
  else{
    q->front++;
    x=q->Q[q->front];
    return x;
  }
}
void enqueue(struct Queue *q, int data)
{
  q->back++;
  q->Q[q->back]=data;
}
int main(int argc, char const *argv[]) {
  struct Queue q;
  create(&q, 5);
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  Display(q);
  printf("%d\n", dequeue(&q));
  return 0;
}
