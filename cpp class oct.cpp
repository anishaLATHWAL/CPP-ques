//#include<iostream>
//using namespace std;
//class A
//{
//    int x,y;
//    public:
//    A(int r, int s)
//    {
//        x=r;
//        y=s;
//        cout<<"\nCalling base class constructor : "<<x<<y;
//    }
//    ~A()
//    {
//        cout<<"\nCalling base class destructor: ";
//    }
//};
//
//class B:public A
//{
//    int l,m;
//    public:
//    B(int p,int q,int r,int s):A(r,s)
//    {
//        l=p;
//        m=q;
//        cout<<"\n Calling derived class B constructor: "<<l<<" "<<m;
//    }
//    ~B()
//    {
//        cout<<"\n Calling derived B class destructor ";
//    }
//};
//class C:public B{
//    int n,m;
//    public:
//    C(int u,int v,int p, int q,int r, int s):B(p,q,r,s)
//    {
//        n=u;
//        m=v;
//        cout<<"\nCalling derived class C constructor with values: "<<n<<" "<<m;
//    }
//    ~C()
//    {
//        cout<<"\n Calling derived class C destructor";
//    }
//};
//int main()
//{
//    C obj1(1,2,3,4,5,6);
//    return 0;
//}


//#include<iostream>
//using namespace std;
//class M
//{
//    protected: 
//    int m;
//    public:
//    M(int x)
//    {
//        m=x;
//        cout<<"\n In M:";
//    }
//};
//class N
//{
//    protected:
//    int n;
//    public:
//    N(int y)
//    {
//        n=y;
//        cout<<"\n In N";
//    }
//};
//class P:public M,public N
//{
//    int l;
//    public:
//    P(int p,int q,int r):M(r),N(q)
//    {
//        l=p;
//        cout<<"\nIn P";
//    }
//    void display()
//    {
//        cout<<"\n"<<"m= "<<m<<" "<<"n= "<<n<<" "<<"l= "<<l;
//    }
//};
//int main()
//{
//    P obj1(3,2,1);
//    obj1.display();
//    return 0;
//}


//#include <iostream>
//using namespace std;
//class engine
//{
//	public:
//		engine()
//		{
//			cout << "I am engine" << endl;
//		}
//		~engine()
//		{
//			cout << "Engine destroyed" << endl;
//		}
//};
//
//class car
//{
//	public:
//		engine eng;
//		car()
//		{
//			cout << "This is car"<< endl;
//		}
//		~car()
//		{
//			cout << "Car destroyed" << endl;
//		}
//};
//int main()
//{
//	car c;
//}

