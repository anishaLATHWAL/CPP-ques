#include <iostream>
#define MAXSIZE 100

using namespace std;
int a[MAXSIZE];
int size=0;

void create_array();
void insert_Last();
void insert_begin(int t);
void create_array(){
	int n;
	cout << "Enter the size of array: " ;
	cin >> n;
	
	if (n> MAXSIZE)
	{
		cout << "Size are more than 100" << endl;
		return ;
	}
	else
	{
		cout << "Array created " << endl;
		cout << "Enter " << n << "number of element" << endl;
		for (int i=0; i<n;i++)
			cin >> a[i];
		size=n;
	}
}

void trav_forward()
{
	for (int i=0;i<size;i++){
		cout <<a[i] << "\t";
	}
}

void delete_element(int pos, int el)
{
	if (size >=MAXSIZE){
		cout << "Array is full" << endl;
		break;
	}
	for (i=size-1; i>=pos-1 ; i--){
		a[i+1]=a[i];
	}
	a[pos-1]=el;
	size++ ;
	
	for (int i=0; i<size ; i++){
		
	}
	
void insert_Last(int n)
{
	a[size]=t;
	size++
	
}






	
	
	
	
	
	

int main()
{
	delete_element();
	insert_Last(50);
	insert_Last(60);
	return 0;	
}


// create for forward as well......


















