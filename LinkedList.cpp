#include<iostream>
using namespace std;

class linkedList {
	
	private:
		
	struct Node {
		int data;
		Node  *next_add;
	};
	
	Node *head;
	
	
	public:
		
	linkedList() {
		head = NULL;
	}
	void appendNode(int);
	void displayNode();
	void searchNode(int);
	void insertNode(int);
	void deleteNode(int);
	void totalNodes();
	void totalSum();
};

void linkedList::insertNode(int n) {
	
	Node *newNode = new Node;
	newNode -> data = n;
	newNode -> next_add = NULL;
	
	if(head == NULL)
	{
		head = newNode;
	}
	else 
	{
		Node *nodePtr = head;
		
		while(nodePtr -> next_add != NULL) {
		
			nodePtr = nodePtr -> next_add;
		}
		
		nodePtr -> next_add = newNode;	
	}

	
}

void linkedList::displayNode() {
	
	if(head == NULL)
	{
		cout<<"No data to display, LinkedList id empty!"<<endl;
	}
	else {
		
		Node *nodePtr = head;
		
		while(nodePtr != NULL)
		{
			cout<<nodePtr -> data<<endl;
			nodePtr = nodePtr -> next_add;
		}
	}
}

void linkedList::totalNodes() {
	
	Node *nodePtr = head;
	int count = 0;
	
	while(nodePtr != NULL) {
		
		count++;
		
		nodePtr = nodePtr -> next_add;		
	}
	
	cout<<"Total Nodes are "<<count<<endl;
}

void linkedList::totalSum() {
	
	Node *nodePtr = head;
	int sum = 0;
	
	while(nodePtr != NULL) {
		
		sum += nodePtr -> data;
		
		nodePtr = nodePtr -> next_add;		
	}
	
	cout<<"Total Sum is "<<sum<<endl;
}

void linkedList::searchNode(int n) {
	
	Node *nodePtr = head;
	bool found = false;
	
	
	while(nodePtr != NULL)
	{
		if(nodePtr -> data == n) 
		{
			found = true;
			break;
		}
		nodePtr = nodePtr -> next_add;
	}
	
	if(found) 
	{
		cout<<"Node Found."<<endl;
	}
	else
	{
		cout<<"Node Not Found!"<<endl;
	}
}

void linkedList::deleteNode(int n) {

	if(head == NULL)
	{
		cout<<"LinkedList is Empty!"<<endl;
	}
	
	if(head -> data == n)
	{
		Node *nodePtr = head;
		head = head -> next_add;
		delete nodePtr;
	}
	
	Node *currNode = head;
	Node *prevNode = NULL;
	
	while(currNode != NULL)
	{
		
		
		if(currNode -> data == n) 
		{
			prevNode -> next_add = currNode -> next_add;
			delete currNode;
			break;
		}
		
		prevNode = currNode;
		currNode = currNode -> next_add;
		
	}
	
}

int main() {
	
	linkedList  l1;
	
	l1.insertNode(12);
	l1.insertNode(92);
	l1.insertNode(72);
	l1.insertNode(52);
	
	l1.displayNode();
	l1.totalNodes();
	l1.totalSum();
	
	l1.searchNode(12);
	l1.searchNode(97);

	l1.deleteNode(12);
	l1.deleteNode(552);
	l1.deleteNode(72);
	cout<<"After deleting node..."<<endl;
	l1.displayNode();
	
	
	
	return 0;
}
