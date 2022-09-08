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
			if(i == 0)
				cout<<array[i][j]<<" ";
			
			if(i == rows-1)
			{
				cout<<array[i][j]<<" ";
			}
				
			else if(i != 0 && i != rows-1 && j != 0 && j != columns-1 && i == j) 
			{

				cout<<endl<<array[i][0];
	
//				for spaces...
				for(int s=0; s<rows-2; s++)
					cout<<"  ";
					
				cout<<array[i][columns-1]<<endl;
				
			}
		}
	}
	

	
	return 0;
}
