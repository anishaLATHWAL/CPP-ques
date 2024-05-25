//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <int> v1(10);
//	cout << "Size is " << v1.size()<< "\n";
//	for (int i=0;i<=9;i++)
//	{
//		v1[i]=i;
//	}
//	for (int i=10;i<=19;i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "Size is\t" << v1.size()<< "\n";
//	for (int i=0;i<=19;i++)
//	{
//		cout << v1[i] << "\t";
//	}
//	v1.pop_back();
//	v1.pop_back();
//	cout << "\nNew size of the vector: " << v1.size();
//	vector <int>::iterator v=v1.begin();
//	while (v!=v1.end())
//	{
//		cout << "\nvalue of v= "  << *v;
//		v++;
//	}
//	return 0;
//	
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <int> v1(10);
//	cout << "Size is " << v1.size()<< "\n";
//	for (int i=0;i<=9;i++)
//	{
//		v1[i]=i;
//	}
//	
//	vector <int>::iterator v=v1.begin();
//	v1.insert(i,100);
//	v1.erase(v1.begin()+1,v1.begin()+5);
//	
//	for (int i=0;iv1.size();i++)
//	{
//		cout << v1[i] << "\t"
//	}
//	return 0;
//	
//}



//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	int key;
//	int arr[]={12,3,17,8,34,56,9};
//	vector <int>v(arr,arr+7);
//	vector <int>::iterator iter;
//	cout << "\nEnter value: ";
//	cin >> key;
//	iter = find(v.begin(),v.end(),key);
//	if (iter!=v.end())
//	{
//		cout << "Element " << key << " found";
//	}
//	else 
//	{
//		cout << "Element " << key << "not in vector v" << endl;
//	}
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int arr[]={12,3,17,8};
//	vector <int>v(arr,arr+4);
//	for (vector <int>::iterator i=v.begin(); i <v.end(); i++);
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//}



//#include <iostream>
//using namespace std;
//template <class T>
//T square(T num)
//{
//	return num*num;
//}
//int main()
//{
//	int num1=3;
//	cout << "\nSquare of " << num1 << " = " << square<int>(num1);
//	float num2=5.6;
//	cout << "\nSquare of " << num2 << " = " << square<int>(num1);
//}






//#include <iostream>
//using namespace std;
//template <class T>
//void swap1(T &a, T &b)
//{
//	T temp=a;
//	a=b;
//	b=temp;
//}
//int main()
//{
//	int inum1=4, inum2=5;
//	float fnum1=4.8, fnum2=5.3;
//	char c1='A', c2='a';
//	cout << "\nBefore swapping:";
//	cout << "\ninum1=" << inum1 << " and inum2= " << inum2;
//	
//}


#include <iostream>
using namespace std;
#define MAX 5
template <class Type>
Type sum(Type A)
{
	Type total=0;
	for (int i=0;i<MAX;i++ )
	{
		
	}
}










