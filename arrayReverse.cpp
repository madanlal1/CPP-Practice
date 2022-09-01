#include<iostream>
using namespace std;

int main() {

	int A[] = {1,2,3,4,5};
	int count = 4;
	int temp[5]; 
	
	
	for(int a=0; a<5; a++)
	{
		temp[a] = A[count--];
	}

	for(int b=0; b<5; b++)
	{
		A[b] = temp[b];
	}	

	
	for(int i=0; i<5; i++)
		cout<<A[i]<<endl;
	
	
	
	
	return 0;
}

