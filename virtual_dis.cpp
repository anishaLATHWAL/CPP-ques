//#include <iostream>
//using namespace std;
//class base
//{
//	public:
//		base()
//		{
//			cout << "Construtor base\n";
//		}
//		~base()
//		{
//			cout << "Destructor base\n";
//		}
//};
//class derived1:public base
//{
//	public:
//		derived1()
//		{
//			cout << "Constructor derived\n";
//		}
//		~derived1()
//		{
//			cout << "Destructor derived\n";
//		}
//};
//int main()
//{
//	base *b=new derived1;
//	delete b;
//	return 0;
//}



#include <iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout << "Construtor base\n";
		}
		virtual ~base()
		{
			cout << "Destructor base\n";
		}
};
class derived1:public base
{
	public:
		derived1()
		{
			cout << "Constructor derived\n";
		}
		~derived1()
		{
			cout << "Destructor derived\n";
		}
};
int main()
{
	base *b=new derived1;
	delete b;
	return 0;
}











