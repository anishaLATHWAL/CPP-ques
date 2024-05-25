//#include <iostream>
//#include <list>
//using namespace std;
//void display(list <int> &l)
//{
//	list <int>::iterator p;
//	for (p=l.begin();p!=l.end();p++)
//	{
//		cout << "\n" << *p;
//	}
//}
//int main()
//{
//	list <int> list1;
//	list <int> list2;
//	for (int i=0;i<3;i++)
//	{
//		list1.push_back(i);
//	}
//	cout << "\n" << "Displaying first list: " ;
//	display(list1);
//	
//	list <int>::iterator p;
//	for (p=list2.begin();p!=list2.end();p++)
//	{
//		*p=1;
//	}
//		cout << "\nDisplaying second list: ";
//		display(list2);
//		cout << "\nPushing elements at front: ";
//		list1.push_front(100); 
//		display(list1);
//		cout << "\nPoping elements from the front: ";
//		list2.pop_front();
//		display(list2);
//		cout << "\nSorting first list: ";
//		list1.sort();
//		cout << "\nSorting second list: ";
//		list2.sort();
//		display(list2);
//		cout << "\nMerging list: ";
//		list1.merge(list2);
//		display(list1);
//		list1.reverse();
//		display(list1);
//		return 0;
//}


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void show(int n)
{
	cout << n << " ";
}
int main()
{
	int arr[]={12,3,17,8};
	vector <int> v(arr,arr+4);
	for_each(v.begin(),v.end(),show);
}











