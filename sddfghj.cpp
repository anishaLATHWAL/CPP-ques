#include <iostream>
using namespace std;
int square(int s)
{
	return s*s;
}
int main()
{
	cout << "Enter number to compute its square :5 " << endl;
	cout << "Square is : " << square(5) << endl;
	return 0 ;
}
