//#include <iostream>
//using namespace std;
//class X
//{
//	public:
//		int a;
//		void f(int b){
//			cout << "The value of b is " << b << endl;
//		}
//};
//
//int main(){
//	int X::*ptiptr= &X::a;
//	void (X::*ptfptr)(int)= &X::f;
//	X xobject;
//	xobject.*ptiptr=10;
//	cout << "The value of a is " << xobject.*ptiptr << endl;
//	
//	(xobject.*ptfptr)(20);
//}


//#include <iostream>
//using namespace std;
//class test
//{
//	int a,b;
//	public:
//		void show()
//		{
//			a=10;
//			b=20;
//			cout << "obj address= " << this <<endl;
//			cout << "a= " << this->a << endl;
//			cout << "b= " << this->b << endl;
//		}
//};
//
//int main()
//{
//	test t;
//	t.show();
//}


#include <iostream>
using namespace std;
class test
{
	int a,b;
	public:
		void show (int a , int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout << a << endl << b << endl ;	
			cout << &a << endl << &b ;
		}
};
int main()
{
	test t;
	t.show(10,20);
	t.display();
}










