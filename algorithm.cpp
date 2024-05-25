//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void show(int n)
//{
//	cout << n << " ";
//}
//int main()
//{
//	int arr[]= { 12,3,17,8};
//	vector <int>v(arr,arr+4);
//	for_each( v.begin(), v.end(), show );	
//}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int arr[]= { 12,3,17,8,34,56,9};
	int key;
	vector <int>v(arr,arr+7);
	vector <int>::iterator iter;
	cout << "Enter value: ";
	cin >> key;
	iter = find( v.begin(), v.end(),key );	
	if (iter!= v.end())
	{
		cout << "Element " << key << " found" << endl;
	}
	else
	{
		cout << "Element " << key << " not found" << endl;
	}
}























