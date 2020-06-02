#include <iostream>
using namespace std;
int main()
{
	int  a=10;
	int *p;
	p=&a;
	cout<<"p points to the value of::"<<*p<<"\n";
	cout<<"The address of a (&a):"<<&a<<"\n";
	cout<<"The value of p::"<<p<<"\n";
	
	
	/******
	 * We can allocate the memory inside heap dynamically using a pointer to allocate the memory::
	 * For Code see below:
	 * *****/
	 int *t;
	 t = new int[5];
	 cout<<"The value of t: "<<t;
	 ///Here the pointer t points at the head element of an integer array of 5 elements.
	 ///we can also allocate memory using::
	 /// t = (int *)malloc(5*sizeof(int));
	 free(t);
}
