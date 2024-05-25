#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *link   ;
		
};

class LinkedList
{
	public:
	node *head;
	LinkedList()
	{
		head = NULL;
	}
	
	void create();
	void display();
	void insert_begin(int x);
	void insert_at_given_position();
	
};

void LinkedList::create()
{
	int n;
	node *temp = new node;
	cout<<"Enter the data to insert into node: ";
	cin>>n;
	temp->data = n;
	temp->link = NULL;
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		node *t = head;
		while(t->link!=NULL)
		{
			t = t->link;
		}
		t->link = temp;
	}
}

void LinkedList::display()
{
	node *t = head;
	while(t!=NULL)
	{
		cout<<t->data<<"==>";
		t=t->link;
	}
	cout<<"NULL";
}
void LinkedList::insert_begin(int x)
{
	node *temp = new node;
	temp -> data =x;
	temp -> link = head;
	head = temp;
}

void LinkedList::insert_at_given_position()
{
	node *t= new node;
	int counter=0;
	int pos;
	cout << "Enter the position..";
	cin >> pos;
	
	cout << "Enter the data to insert at given position: ";
	cin >> t->data ;
	t -> link = NULL;
	
	node *pre =NULL, *cur= head;
	while(cur->link != NULL)
	{
		pre = cur;
		cur= cur->link;	
	}
	t->link=cur;
}


void LinkedList::delete_last()
{
	node *pre, *cur=head;
	while (cur -> link != NULL)
	{
		pre= cur;
		cur = cur->link;
	}
	pre->link =NULL;
	cout << "\n Delete element data : " << cur -> data << endl;
	delete cur;
}
int main()
{
	LinkedList l;
	int n;
	cout<<"Enter the number of nodes to insert: ";
	cin>>n;
	for(int i=0;i<n;i++)
		l.create();
	l.display();
	void insert_Last();
	l.display();
	int x;
	cin>>x;
	void insert_begin(int x);
	void delete_last();
	return 0;
} 



