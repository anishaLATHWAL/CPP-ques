#include <iostream>
using namespace std;
class node
{
	public:
		node *left;
		int data;
		node *right;
};
node *root;
class BST
{
	public:
	BST()
	{
		root=NULL;
	}
	void insert(int );
	void inorder(node *);
	void preorder(node *);
	void postorder(node *);
	node *deletenode(node *,int);
	node *minnode(node *);
	int height(node *t);
};

int BST::height(node *t)
{
	if (t==NULL)
		return -1;
	int l=height(t->left);
	int r=height(t->right);
	return (l > r)?(l+1):(r+1);
}
node *BST::minnode(node *t)
{
	cur=new node;
	cur=t;
	while (cur && cur->left!=NULL)
	{
		cur=cur->left;
	}
	return cur;
}

node *BST::deletenode(node *rt,int key)
{
	if(rt==NULL)
	{
		cout << "Element is not found..";
		return NULL;
	}
	else
	{
		if (key > rt->data)
		{
			rt->right=deletenode(rt->right,key);
		}
		else if (key< rt->data)
		{
			rt->left=deletenode(rt->left,key);
		}
		else
		{
			// one child node
			if (rt->left=NULL)
			{
				node *temp=rt->right;
				delete rt;
				return temp;
			}
			else if (rt->right=NULL)
			{
				node *temp=rt->left;
				delete rt;
				return temp;
			}
			// no child
			else if (rt->left==NULL && rt->right==NULL)
			{
				delete rt;
				return NULL;
			}
			// two child
			node *temp=minnode(rt->right);
			rt->data=temp->data;
			rt->right=deletenode(rt->right,temp->data);
		}
		return rt;
	}
}

void BST::inorder(node *t)
{
	if (t!=NULL)
	{
		inorder(t->left);
		cout << t->data << " ";
		inorder(t->right);
	}
}

void BST::preorder(node *t)
{
	if (t!=NULL)
	{
		
		cout << t->data << " ";
		preorder(t->left);
		preorder(t->right);
	}
}
void BST::postorder(node *t)
{
	if (t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		cout << t->data << " ";
	}
}
void BST::insert(int d)
{
	node *temp=new node;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=d;
	if (root==NULL)
	{
		root=temp;
	}
	else
	{
		node *cur=root;
		node *parent;
		while(cur!=NULL)
		{
			parent =cur;
			if(d>cur->data)
			{
				cur=cur->right;
			}
			else 
			{
				cur=cur->left;
			}
		}
	if (d>parent->data)
	{
		parent->right=temp;
	}
	else
	{
		parent->left=temp;
	}
}	
}

int main()
{
	BST b;
	
	cout << "Height is: " << b.height(root);
	b.insert(50);
	b.insert(40);
	b.insert(60);
	b.insert(30);
	b.insert(45);
	
	cout << "Height is: " << b.height(root);
	
	b.insert(42);
	b.insert(52);
	b.insert(80);
	b.insert(75);
	b.insert(78);
	b.insert(90);
	b.insert(51);
	b.insert(48);
	b.insert(95);
	b.insert(20);
	
//	cout << "Inorder: " << endl;
//	b.inorder(root);
	
//	cout << "\nPreorder: " << endl;
//	b.preorder(root);
	
//	cout << "\nPostorder: " << endl;
//	b.postorder(root);

	cout << "\nBefore deleteion Preorder: " << endl;
	b.preorder(root);
	b=b.deletenode(20);
	
	cout << "Height is: " << b.height(root);
}



