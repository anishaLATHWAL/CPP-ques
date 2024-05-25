#include <iostream>
using namespace std;
class s
{
	int rollno;
	char name[10];
	int age;
	s *next;
	public:
		s()
		{
			next =NULL;
		}
	void getdata()
	{
		cout << "Enter rollno,name,age"<< endl;
		cin >> rollno >> name >> age;
	}
	void links(s *t)
	{
		next=t;
		}
	void print()
	{
		while(p!=NULL)
		{
			cout << "rollno" << p->rollno << "Nmae " << p->name ,, "Age=" << p->age << endl;
			p=p->next;
		}
	}
};
int main()
{
	s o1,o2,o3;
	o1.getback();
	o2getback();
	o3getback();
	o1.links(&n2);
	o2.links(&n3);
	o1.print();
}











