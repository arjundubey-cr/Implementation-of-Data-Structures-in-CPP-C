struct Node{
  struct Node *lchild;
  int data;
  struct Node *rchild;
};

struct Queue{
  int size;
  int front;
  int rear;
  struct Node **Q;
};
