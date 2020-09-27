#include <iostream>
#include <cstring>
using namespace std;

struct Stack{
    int size;
    int top;
    char *s;
};
void push(Stack *st, int x)
{
    if(st->top==st->size-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }

}

void pop(Stack *st)
{
    if(st->top==-1) printf("Stack Underflow!");
    else
    {
        st->top--;
    }

}

int isEmpty(Stack st)
{
    if(st.top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int isBalanced(char *exp)
{
    struct Stack st;
    st.size = strlen(exp);
    st.top=-1;
    st.s = new char[st.size];

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(&st, exp[i]);
        }
        else if(exp[i]=='(')
        {
            if (isEmpty(st)) return false;

            pop(&st);
        }
    }

    return isEmpty(st)?true:false;
}
int main()
{

}
