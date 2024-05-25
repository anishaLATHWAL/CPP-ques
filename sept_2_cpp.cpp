#include <iostream>
#include <fstream>                                                    
using namespace std;
int main()
{

	
	ofstream fout;
	fout.open("result.txt");
	fout << "india\n";
	fout << "USA \n";
	fout << "UK \n";
	fout.close();
	fout .open("result1.txt");
	fout << "Delhi";
	fout << "Washington";
	fout << "London \n";
	fout.close();
	return 0;
}








