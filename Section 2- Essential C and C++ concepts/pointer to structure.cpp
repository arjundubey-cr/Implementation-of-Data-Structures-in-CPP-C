#include <iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};


int main()
{
	Rectangle a;
	a.length = 14;
	a.breadth = 15;
	struct Rectangle *p = &a;
	/***the pointer P is a pointer of type struct and points to the address of A;
	 * we can access the value of a from the pointer by using -> 
	 * */
	 cout<<"Value of length using pointer::"<<p->length<<"\n";
	 cout<<"Value of length using struct::"<<a.length;
}
