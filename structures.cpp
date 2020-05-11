#include <iostream>
using namespace std;


/****
 * To declare a structure we can begin with 
 * struct _Name of Structure_
 * {
 * 		data to be stored inside;
 * 		(For example refer below) 
 * };
 * 
 * struct declaration should always end with a ';'
 * *****/
struct Rectangle{
	int length;
	int breadth;
};

struct ComplexNum{
	float realpart;
	float imgpart;
};

struct Card{
	int faceValue;
	char color[10];
	int shape[10];
}

struct Student{
	int rollNum;
	char studentName[25];
	char address[50];
	char studyDepartment[50];
	int dateOfBirth;
}

int main()
{
	//struct Rectangle r1;	//Declaration
	struct Rectangle r2={5, 10};
	cout<<"Area of Rectangle as of now is:"<<r2.length*r2.breadth;
	r2.length = 10;
	r2.breadth = 15;
	cout<<"Area of Rectangle::"<<r2.length*r2.breadth<<"\n";
	
	struct Card deck[52];// This will create an array of structures and we can use deck[0].face to access the face of card 0;
}
