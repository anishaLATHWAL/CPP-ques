//#include <iostream>
//using namespace std;
//int main()
//{
//	int a,b;
//	cout << "Enter the values of a and b: ";
//	cin >> a;
//	cin >> b;
//	int x=a-b;
//	try
//	{
//		if (x!=0)
//		{               
//			cout << "Result (a/x)= " << a/x;
//		}
//		else
//		{
//			throw(x);
//		}
//	}
//	catch(int t)
//	{
//		cout << "Exception caught:x= " << x << endl;
//	}
//	cout << "End";
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	try
	{
		int i=0;
		while(1)
		{
			cout << a[i]<< endl;
			i++;
			if (i==5)
			{
				throw i;
			}
		}
	}
}




















