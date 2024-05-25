#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *prev;
	node *next;
};
class linkedlist
{
	public:
		node *head=NULL;
		node *tail=NULL;
	
void insertatfirst()
{
	int d;
	cout << "Enter the data to be entered: ";
	cin>> d;
	node *temp=new node;
	if (head==NULL)
	{
		head=tail=temp;
	}
	else
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
}

void insertatlast()
{
	int d;
	cout << "Enter the data to be inserted at last: ";
	cin >> d;
	node *temp=new node;
	if (head==NULL)
	{
		head=tail=NULL;
	}
	else
	{
		tail->next=temp;
		temp->prev=tail;
		temp=tail;
	}
}
};
int main()
{
	linkedlist L;
	L.insertatfirst();
	L.insertatfirst();
	L.insertatfirst();
	L.insertatfirst();
	return 0;
}










