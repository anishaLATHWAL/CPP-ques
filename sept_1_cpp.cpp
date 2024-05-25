//#include <iostream>
//using namespace std;
//
//class THuman
//{
//	public:
//		string name;
//		int age , height;
//};
//int main()
//{
//	THuman *worker[1000];
//	for (int i=0;i<5;i++){
//		worker[i]= new Thuman;
//	}
//	for (int i=0; i<5;i++){
//		cin >> worker[i]->name;
//		cin >> worker[i]->age;
//		cin >> worker[i]-> height ;
//	}
//	for (int i=0; i<5; i++){
//		cout << worker[i]->name << worker[i]->age << worker[i]->height << "\n" ;
//	}
//	for (int i=0; i<5; i++){
//		delete worker[i];
//	}
//}



//#include <iostream>
//using namespace std;
//
//class THuman
//{
//	public:
//		string name;
//		int age , height;
//	
//	void get()
//	{
//		cin >> this->name >> this->age >> this->height ;
//	}
//	void disp()
//	{
//		cout << this->name << this->age << this->height << "\n";
//	}
//};
//
//int main()
//{
//	THuman *worker[2];
//	for (int i=0; i<2; i++)
//	{
//		worker[i]=new THuman;	
//	}	
//	for (int i=0; i<2; i++)
//	{
//		worker[i]->get();
//	}
//	for (int i=0; i<2; i++)
//	{
//		worker[i]->disp();
//	}
//	for (int i=0; i<2; i++)
//	{
//		delete worker[i];
//	}
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//main()
//{
//	string s1("man");
//	string s2="hi";
//	string s3;
//	s3=s1;
//	cout << "s3= " << s3 << endl;
//	
//	s3= "neither " + s1 + "nor";
//	s3+=s2;
//	cout << "s3 = " << s3 << endl;
//	
//	s1.swap(s2);
//	cout << s1 << "nor" <<s2 << endl;
//	return 0;	
//}


//#include <iostream>
//using namespace std;
//main()
//{
//	string s1("1,2,3,4,5");
//	string  s2("abcde");
//	s1.append(s2);
//	cout << s1 << endl;
//	
//	s1.append(s2,1,2);
//	cout << s1;
//	
//	return 0;
//	
//}

//#include <iostream>
//using namespace std;
//main()
//{
//	string s1(1,2,3,4,5);
//	string  s2("abcde");
//	
//	s1.insert(4,s2);
//	cout << s1 << endl;
//	
//	s1.erase(4,5);
//	cout << s1 << endl;
//	
//	s1.replace(1,3,s1);
//	cout << s2 << endl;
//	
//	return 0;
//}


#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="welcome";
	cout << "Size= " << str.size() << endl;
	cout << "Length= " << str.length() << endl;
	cout << "Max size= "  << str.max_size() << endl;
	cout << "Empty= " << (str.empty()? "yes" : "no") << endl;
	return 0;
}
















