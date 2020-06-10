/**
 * Tower of Hanoi is a popular problem having 3 towers and n 
 * number of disks arranged in tower 1 with the order of increasing size
 * the goal of the problem is to transfer the disk from tower 1 
 * to tower 2 using tower 2 such that no disk of larger size is 
 * placed on the top of smaller sized disk in the process
 * **/
 
 #include <iostream>
 using namespace std;
 
 void TOH(int n, int A, int B, int C)
 {
	 if(n>0){
		TOH(n-1, A,C,B);
		printf("from %d to %d \n", A,C);
		TOH(n-1, B,A,C);
		}
 }
 int main()
 {
	int numOfDisk;
	printf("Enter the number of Disks:\n");
	scanf("%d",&numOfDisk);
	TOH(numOfDisk, 1, 2, 3);
	 
 }
