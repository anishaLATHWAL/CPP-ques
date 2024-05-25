#include <iostream>
using namespace std;
class bc
{
	public:
		virtual void show()
		{
			cout << "\nshow() of the base class" << endl;
		}
};
class dc:public bc
{
	public:
		void show()
		{
			cout << "\nshow of the derived class" << endl;
		}
};
int main()
{
	bc *bptr;
	bc base;
	bptr = &base;
	cout << "\nRuntime polymorphism";
	cout << "bptr points the base objects\n";
	bptr->show();
	
	dc derived;
	bptr = &derived;
	cout << "bptr points the derived objects";
	cout << endl;
	bptr->show();
	return 0;
}





