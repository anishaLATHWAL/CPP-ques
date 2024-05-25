#include <iostream>
using namespace std;
class Rect
{
	double width,length;
	
	public:
		void get()
		{
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
		}
		
		double calculateArea()
		{
			double area= this->length*this->width;
			return area;
		}
};

int main()
{
	Rect rect1;
	Rect rect2;
	
	rect1.get();
	rect1.calculateArea();
	rect2.get();
	rect2.calculateArea();
}




