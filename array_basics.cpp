#include <iostream>
using namespace std;
int main()
{
	//DECLARATION OF ARRAY
	int arr[5]; //An Integer Array of 5 elements.
	/**
	 * To embed integers inside the array we can use two ways:
	 * 1) We can use index of arrays and hardcode the value at each index
	 * 2) We can use a range based for loop and from that we can assign value to each index of array.
	 * 
	 * **/
	 /***Method (1)***/
	 arr[0]=0;
	 arr[1]=1;
	 arr[2]=2;
	 arr[3]=3;
	 arr[4]=4;
	 
	 /***Method (2)***/
	 for(int i=0;i<5;i++){
		 arr[i]=i;
	 }
	 /**
	  * We can also use the same indexing to access the elements inside an array.
	  * **/
	 
}
