#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Queue {
  /* data */
  int size;
  int front;
  int back;
  int *q;
};


int main(int argc, char const *argv[]) {
  struct Queue Q;
  //int size=0;
  printf("Enter the size of Queue\n");
  scanf("%d\n", &Q.size);
  Q.q = (int *)malloc(sizeof(int)*Q.size);
  Q.front=0;
  Q.back=0;
  
  return 0;
}
