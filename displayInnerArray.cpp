#include<iostream>
using namespace std;

int main() {
	
	int rows, columns;
	cout<<"Enter number of rows : ";
	cin>>rows;
	cout<<"Enter number of columns : ";
	cin>>columns;
	
	int array[rows][columns];
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<"Enter "<<i<<"th row and "<<j<<"th column value : ";
			cin>>array[i][j];
		}
	}
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
				
			if(i != 0 && i != rows-1 && j != 0 && j != columns-1 && j != 0 && j != columns-1) 
			{
				
				cout<<endl<<array[i][j];
	
//				for spaces...
				for(int s=0; s<rows-2; s++)
					cout<<"  ";
				
			}
		}
	}
	

	
	return 0;
}


//1 2 3 4 
//5 6 7 8 
//9 10 11 12 
//13 14 15 16
