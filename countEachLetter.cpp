#include<iostream>
using namespace std;

int main() {
	
	string name;
	char lett;
	
	cout<<"Name => ";
	getline(cin, name);
	
	int count = 0;
	cout<<"enter letter => ";
	cin>>lett;
	
	for(int i=0; i<name.length(); i++)
	{
		if(name[i] == lett)
			count++;
	}
	cout<<"found "<<lett<<" "<<count<<" times.";
	
	return 0;
}
