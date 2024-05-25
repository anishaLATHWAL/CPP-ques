#include<iostream>
#define MAXSIZE 100
using namespace std;
int a[MAXSIZE];
int size=0; 

void create_array();
void Trav_forward();
void Trav_Backward();
void Search_Element(int x);
void insert_Last(int t);
void insert_begin(int t);
void inset_pos(int n);
void Delete_last(int n);
void Delete_beg(int n);

void insert_Last(int t)
{
a[size]=t;
size++;
}

void create_array()
{
int n;
cout<<"Enter the size of array :";
cin>>n;

if(n> MAXSIZE || n<0)
{
cout<<"size are more then 100 "<<endl;
}
else
{
cout<<"Array created "<<endl;
cout<<"Enter "<<n<<" number of element"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
size=n;
}
}
void Trav_forward()
{
cout<<"\nList in Forward order ..."<<endl;
for(int i=0;i<size;i++)
cout<<a[i]<<"\t";
}
void Trav_Backward()
{
cout<<"\n\nList in Backward order ..."<<endl;
for(int i=size-1;i>=0;i--)
cout<<a[i]<<"\t";
}

void Search_Element(int x)
{ int i;
for(i=0;i<size;i++)
{
if(a[i]==x)
	{
	cout<<"Element fund at position"<<(i+1)<<endl;
	break;
	}
}
if(i>=size)
cout<<"Element not found..."<<endl;
}



void insert_last(int n){
	if (size >=100){
		cout << "Element cannot be added";
	}
	else{
		a[size]==t;
		size++;
	}
}

void insert_begin(int t){
	for (int i=size-1;i>=0;i--){
		a[i+1]=a[i]
		a[0]=t;
		size++ ;
	}
}

void insert_pos(int t){
	for (i=size-1; i>=pos;i--)
	{
		a[i+1]=a[i];
		a[pos]=t;
		size++
	}
}

void Delete_beg(int n){
	for ( i=0; i <size-1; i++){
		a[i]=a[i+1];
		a[size-1]=0;
		size-- ;
	}
}


Delete_last(int n){
	a[size-1]=0;
	size--;
	
}


int main()
{
	int t,p;
	create_array();
	Trav_forward();
	insert_Last(55);
	insert_Last(60);
	insert_begin(10);
	Trav_forward();
	insert_pos(1);
	Delete_last(2)
	
	return 0;
	}
