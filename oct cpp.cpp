//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	int *p=NULL;
//	p=new int;
//	if(!p)
//	{
//		cout << "Memory allocation here";
//		exit(1);
//	}
//	if (p==NULL)
//		cout << "Memory allocation failure";
//		exit (1);
//		
//		*p=12;
//		
//	cout << "Integer value stored is: " <<*p;
//	delete  "Deallocation of memory";
//	cout <<"\nMemory deallocate ";
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//    float *p=NULL;
//    float *r =NULL;
//    float *t =NULL;
//    float *si=NULL;
//    p=new float;
//    r=new float;
//    t=new float;
//    si=new float;
//    if(p==NULL || r==NULL || t==NULL || si==NULL)
//    {
//        cout<<"\n Memory allocation failed ";
//        exit(1);
//    }
//    cout<<"\n Enter principle,rate,time";
//    cin>>*p>>*r>>*t;
//    si=(0.01)*(*p)*(*r)*(*t);
//    cout<<"\n Simple Interest is: "<<*si;
//    delete p;
//    delete r;
//    delete t;
//    delete si;
//    return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//    int *arr;
//    int size;
//    cout<<"\n Enter the size of integer array: ";
//    cin>>size;
//    cout<<"\n Creating an array of size "<<size;
//    arr=new int [size];
//    if(arr==NULL)
//    {
//        cout<<"\n Problem in memory alloacation ";
//        exit(1);
//    }
//    else{
//        cout<<"\n Dynamic alloaction of memory for array arr is successful"<<endl;
//        cout<<"Enter the array elements :"<<endl;
//        for(int i=0;i<size;i++)
//        {
//            cin>>*(arr+i);
//        }
//        cout<<"\n Entered elements are: ";
//        for(int i=0;i<size;i++)
//        {
//            cout<<"\n"<<*(arr+i);
//        }
//    }
//    delete []arr;
//    cout<<"\n Memory deallocated ";
//    return 0;
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	double *arr,*sum,*avg;
//	int size;
//	sum = new double;
//	avg = new double;
//	cout << "\nEnter the size of double array:";
//	cin >> size;
//	cout <<"\nCreating an array of size: " << size;
//	arr=new double[size];
//	if (arr==NULL || sum==NULL || avg==NULL)
//	{
//	    cout<<"\n Problem in memory allocation";
//	    exit(1);
//	}
//	cout << "\nEnter the array elements: ";
//	for (int i=0;i<size;i++)
//	{
//		cin >> *(arr+i);
//	}
//	for (int i=0;i<size;i++)
//	{
//		*sum = *sum+arr[i];
//	}
//	cout <<"\nSum of elements of array is: "<<*sum;
//    *avg=*sum/size;
//    cout << "\nAverage of array elements is: "<<*avg;
//	delete []arr;
//	delete sum;
//	delete avg;
//	return 0; 
//}



#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int *arr,sum=0;
	int size;
	cout << "\nEnter the size of integer array:";
	cin >> size;
	cout <<"\nCreating an array of size: " << size;
	arr=new int[size];
	if (arr==NULL)
	{
	    cout<<"\n Problem in memory allocation";
	    exit(1);
	}
	cout << "\nEnter the array elements: ";
	for (int i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	for (int i=0;i<size;i++)
	{
		sum = sum+arr[i];
	}
	cout <<"\nSum of elements of array is: "<<sum;
	delete []arr;
	return 0; 
}



















