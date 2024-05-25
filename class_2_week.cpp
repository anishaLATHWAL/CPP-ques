//#include <iostream>
//using namespace std;
//struct employee
//{
//	char name[50];
//	int age;
//	float salary;
//};
//int main()
//{
//	employee.e1;;
//	cout << "Enter full name: ";
//	cin.get(e1.name,50);
//	
//	cout << "Enter age: ";
//	cin >>e1.age;
//	
//	cout << "Enter salary: ";
//	cin >> e1.salary;
//	
//	cout << "\n Displaying information." << endl;
//	cout << "Name: " << e1.name << endl;
//	cout << "Age: " << e1.age << endl;
//	cout << "Salary: " << e1.salary << endl;
//	return 0;
//}



//// Array of the strutures....
//#include <iostream>
//using namespace std;
//struct emp
//{
//	string name;
//};
//int main()
//{
//	emp e[5];
//	int i;
//	for (i=0;i<5;i++){
//		cout << "Enter the name of the employee: " << i+1 << ":";
//		cin >> e[i].name;
//	}
//	cout << "\n Name of all employees: \n";
//	for (i=0;i<5;i++){
//		cout << e[i].name << endl;
//	}
//	cout << endl ;
//	return 0;
//}


// Array of union...
#include <iostream>
using namespace std;
union data{
	int intvalue;
	char charvalue;
	double doublevalue;
};
int main(){
	const int size=5;
	Data dataArray[size];
	
	// population of array with the data
	dataArray[0].intValue = 42;
	dataArray[1].charValue = 'A';
	dataArray[2].doubleValue = 3.14 ;
	dataArray[3].intValue = 100;
	dataArray[4].charValue = 'Z';
	
	cout << "Arrays of union: " <<endl;
	for (int i=0;int<size;++i){
		cout << "Index " << i << ":" ;
		
		if (i%3==0){
			cout <<
		}
	}
	
}














