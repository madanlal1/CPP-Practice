#include<iostream>
using namespace std;

int main() {
	
	int Array[] = {4,5,45,32,15,84,2};
  	
	int small = Array[0];
	int large = Array[0];
	
	for(int i=0; i<7; i++) {		//Array .length
	
		if(small>Array[i])
		{
			small = Array[i];
		}
		
		if(large<Array[i])
		{
			large = Array[i];
		}
	}
	
	cout<<"Smallest Number is : "<<small<<endl;
	cout<<"Largest Number is  : "<<large;
	
	return 0;
}
