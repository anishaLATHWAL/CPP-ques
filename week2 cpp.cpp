//#include <iostream>
//using namespace std;
//int main()
//{
//	string s1= "arlcome";
//	string s2= "wearomea";
//	cout << s1.find("lc") << endl;
//	cout << s2.rfind("ea") << endl;
//	cout << s2.find_last_of('e') << endl << endl;
//	
//	string s3="welcome";
//	string s4;
//	s4 = s3.substr(0,2);
//	cout << s4 << endl << endl;
//	
//	string str1("lovely professional university");
//	cout << str1.find("ve") << endl;
//	cout << str1.rfind("ve") << endl;
//	cout <<str1.find_first_of("l") << endl;
//	cout <<str1.find_last_of("l") << endl << endl;
//	
//	string str2("ve");
//	cout << str1 << endl;
//	int x= str1.find(str2);
//	cout << x << endl;
//	
//	string temp= str1.substr(x+str2.size(),30);
//	cout << temp << endl;
//	
//	int y=temp.find(str2);
//	cout << y;
//	
//	return 0; 
//}

//#include <iostream>
//using namespace std;
//class Rectangle
//{
//	private:
//		int length, breadth;
//	public:
//		Rectangle()
//		{
//			length=5, breadth=6;
//		}
//		void area()
//		{
//			cout << length*breadth;
//		}
//}


//#include <iostream>
//using namespace std;
//class Rectangle
//{
//	int length, breadth;
//	Reactangle(int x, int y)
//	{
//		length = x;
//		breadth = y;
//	}
//	int area();
//};
//
//
//int Reactangle::area()
//{
//	int a= length*breadth;
//	cout << "Area is: " << a;
//}
//
//int main()
//{
//	int x,y;
//	cout << "Enter length and bradth: ";
//	Reactangle r1(5,6);
//	r1.area();	
//}



//#include <iostream>
//using namespace std;
//class rectangle
//{
//	int length, breadth;
//	
//	public:
//	Reactangle(int x=12, int y=34)
//	{
//		length = x;
//		breadth = y;
//	}
//	int area(){
//		return (length*breadth);
//	}
//	rectangle(rectangle &rec)
//	{
//		cout << "Copy initiated";
//		length= rec.length;
//		breadth= 10;
//	}
//};
//
//
//int main()
//{
//	
//	rectangle r1;
//	cout << "Area is: ";
//	
//	reactangle r1(45,67);
//	cout << "Area is " << r1.area();
//	r1.area();	
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class Base
//{
//	private:
//		int value;
//	
//	public:
//		
//	Base(int value):value (value)
//	{
//		cout << "value is " << value;
//	}
//};
//
//int main()
//{
//	Base b1();
//	return 0;
//}



#include <iostream>
#include <conio.h>
using namespace std;
class counter
{
	int id;
	public:
		counter (int i)
		{
			cout << "Constructor of an object with id=1 " << endl;
		}
	return 0;
}

void main()
{
	counter c1(i:1);
	counter c1(2);
	counter c1(3);
	cout << "\n end of main"
}























