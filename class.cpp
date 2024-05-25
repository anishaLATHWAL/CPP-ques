#include<iostream>
using namespace std;
class node
{
    public:
    node *left;
    int data;
    node *right;
};
node* root;
class BST
{
    public:
    //node* root;
    BST()
    {
        root=NULL;
    }
    9
    
    void insert_Node(int);
    void inorder(node*);
};

void BST::inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}


void BST::insert_Node(int d)
{
    node *temp=new node;
    temp->left=NULL;
    temp->right=NULL;
    temp->data=d;
    if(root==NULL)
    {
        root=temp;
        cout<<"Root: "<<root->data<<endl;
    }
    else
    {
        node * cur=root;
        node *pre=NULL;
        while(cur!=NULL)
        {
            pre=cur;
            if(d < cur->data)
                cur=cur->left;
            else
                cur=cur->right;
            
        }
        if(d<pre->data)
        {
            pre->left=temp;
            cout<<d<<" inserted at left of "<<pre->data<<endl;
        }
        else
        {
            pre->right=temp;
            cout<<d<<" inserted at right of "<<pre->data<<endl;
        }
    }
}
int main()
{
    BST b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        b.insert_Node(d);
    }
    b.inorder(root);
    
}

























