//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
	// 1.
//	char s[30];
//	ofstream fileout;
//	ifstream filein;
//	fileout.open("data",ios::app);
//	fileout<< "Hello World" ;
//	fileout.close();
//	filein.open("data",ios::in);
//	filein.getline(s,30);
//	cout << s;

	// 2.
//	ofstream fp;
//	fp.open("output.txt",ios::out);
//	if(fp)
//	{
//		fp << "Iamneo.ai" << endl;
//		fp << "Lovely Professional University" << endl;
//		fp << "C++ Tutorial" << endl;
//		fp << "Object Oriented Language" << endl;
//	}
//	else
//	{
//		cout << "Error Occured while opening file" << endl;
//	}
//	return 0;

	// 3.
//	ofstream myFile;
//	ifstream file;
//	char ch[50];
//	char text;
//	cout << "Enter the text here: "<< endl;
//	cin .getline(ch,50);
//	myFile.open("output.txt", ios::out);
//	if (myFile)
//	{
//		myFile<<ch;
//		cout << "Data stored successfully. \n\n" << endl;
//	}
//	else
//	{
//		cout << "Error while opening file. \n\n" << endl;
//		myFile.close();
//	}
//	
//	file.open("input.txt",ios::in);
//	if(file)
//	{
//		file.seekg(7,ios::beg);
//		cout << "The output (after skipping first 7 bytes) is: ";
//		while (file.eof())
//		{
//			file.get(text);
//			cout << text ;
//		}
//	}
//	else
//	{
//		cout << "Error while opening the file. \n" << endl;
//		file.close();
//	}
//	return 0;
//}




#include <iostream>
using namespace std;
class Employee
{
	private:
		char name[50];
		char employee_ID[50];
		char joining_Date[50];
		char position[50];
		char marital_status[50];
		char age[20];
		char salary[25];
		char comment[50];
	
	public:
		void getEmp_data()
		{
			cout << "Welcome to InfoBrother" << endl;
			cout << "**********************" << endl;
			cout << "\n Empoyee Name: ";
			cin.getline(name,50);
			cout << "\n Employee ID: ";
			cin.getline(employee_ID,50);
			cout << "\n Joining date: ";
			cin.getline(joining_Date,50);
			cout << "\n Description: ";
			cin.getline(position,50);
			cout << "\n Single/Married: ";
			cin.getline(marital_status,50);
			cout << "\n Employee age: ";
			cin.getline(age,20);
			cout << "\n Employee Salary: ";
			cin.getline(salary,25);
			cout << "\n Comment: ";
			cin.getline(comment,50);
		}
		void showemp_data()
		{
			cout << "Employee Data: " << endl;
			cout << "**************" << endl;
			cout << "Name: " << name << endl;
			cout << "Employee ID:  " << employee_ID << endl;
			cout << "Joining Date:  " << joining_Date << endl;
			cout << "Position: " << position << endl;
			cout << "Marital Status:  " << marital_status << endl;
			cout << "Age of employee: " << age << endl;
			cout << "Total Salary:  " << salary << endl;
			cout << "Comment:  " << comment << endl;
		}
};

class Library
{
	public:
		Employee Emp;
		fstream fp,fp1;
		void writeEmployee()
		{
			fp.open("Employee.txt",ios::out);
			if (fp)
			{
				Emp.getEmp_data();
				fp.write((char *)&Emp,sizeof(Emp))
				cout << "Record Store Scccessfully.." << endl;
			}
			fp.close();
		}
		
		void w_displayEmp()
		{
			fp.open("Employee.txt",ios::in);
			if(fp)
			{
				while (fp.read((char*)&Emp,sizeof(Emp)))
				{
					Emp.showemp_data();
				}
			}
			fp.close();
		}
		
};

int main()
{
	Library lib;
	lib.WriteEmployee();
	lib.w_displayEmp();
	
	return 0;
}








