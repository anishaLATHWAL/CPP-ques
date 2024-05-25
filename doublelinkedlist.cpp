#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *prev;
		node *next;
		
};

class DoubleLinkedList
{
	public:
	node *first , *last;
	DoubleLinkedList()
	{
		first= NULL;
		last= NULL;
	}
	
	void create();
	void Traversal_forward();
	void Traversal_backward();
	void insert_begin();
	void insert_at_given_position();
	void delete_first();
};

void DoubleLinkedList::create()
{
	int n;
	node *temp = new node;
	cout<<"Enter the data to insert into node: ";
	cin>>n;
	temp->data = n;
	temp->prev=NULL;
	temp->next=NULL;
	if(first==NULL && last == NULL)
	{
		first = temp;
		last= temp; 
	}
	else{
		last->next=temp;
		temp->prev=last;
		last=temp;
	}
}

void DoubleLinkedList::Traversal_forward()
{
	node *t = first;
	while(t!=NULL)
	{
		cout<<t->data<<"==>";
		t=t->next;
	}
	cout<<"NULL";
}
void DoubleLinkedList::Traversal_backward()
{
	node *t = last;
	while(t!=NULL)
	{
		cout<<t->data<<"==>";
		t=t->prev;
	}
	cout<<"NULL";
}

void DoubleLinkedList::insert_begin(int x)
{
	node *temp = new node;
	temp -> data =x;
	temp -> prev = NULL;
	temp -> next = first;
	first->prev= temp;
	first= temo;
}


void DoubleLinkedList::insert_last()
{
	node *temp = new node;
	cout << "Enter the data to insert at last: " ;
	cin >> temp->data;
	temp -> next = NULL;
	temp -> prev = last;
	last ->next=temp;
	
	last= temp;

}

void DoubleLinkedList::insert_at_given_position()
{
	node *t= new node;
	int counter=1;
	int pos;
	cout << "Enter the position..";
	cin >> pos;
	
	cout << "Enter the data to insert at given position: ";
	cin >> t->data ;
	t -> next = NULL;
	t -> prev=NULL;
	
	node *pre =NULL, *cur= first;
	while(cur->next != NULL)
	{
		pre = cur;
		cur= cur->next;	
	}
	t->link=cur;
}

void DoubleLinkedList::delete_first()
{
	node *temp= first;
	first= first->next;
	first->prev = NULL;
	cout << "deleted data: " <<temp->data;
	delete temp;
}

void DoubleLinkedList::delete_last()
{
	node *temp= last;
	last = last->next;
	last->next = NULL;
	cout << "deleted data: " <<temp->data;
	delete temp;
}

void DoubleLinkedList::delete_at_given_position()
{
	int pos,counter=1;
	cout << "Enter the position to delete: ";
	cin >> pos;
	node *pre, *curr= NULL;
	while (curr->next != NULL && counter<pos)
	{
		pre= curr;
		curr= curr ->next;
		counter++;
	}
	
	if (counter==pos)
	{
		pre->next=curr->next;
		curr->next->prev = pre;
	}
}

int main()
{
	DoubleLinkedList d;
	int n;
	cout<<"Enter the number of nodes to insert: ";
	cin>>n;
	for(int i=0;i<n;i++)
		d.create();
	d.Traversal_forward();
	d.Traversal_backward();
	d.insert_begin();
	d.Traversal_forward();
	d.insert_at_given_position();
	d.delete_first();
	d.delete_last();
	d.delete_at_given_position();
	return 0;
} 

