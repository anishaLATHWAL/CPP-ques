//#include <iostream>
//using namespace std;
//class sum
//{
//    public:
//    int b,a;
//    sum()
//    {
//        b=50;
//    }
//    void set_data()
//    {
//        cout << "Enter a: ";
//        cin >> a;
//    }
//    int operator+(sum s1)
//    {
//        return(a+s1.b);
//    }
//};
//int main()
//{
//    int d;
//    sum s,t;
//    s.set_data();
//    d=s+t;
//    cout << "Data is: ";
//}



//#include <iostream>
//using namespace std;
//class complex
//{
//    int x,y;
//    public:
//    complex(){
//        x=10;
//        y=20;
//    }
//    complex(int a,int b)
//    {
//        x=a;
//        y=b;
//    }
//    complex operator+(complex c)
//    {
//        complex temp;
//        temp.x=x+c.x;
//        temp.y=y+c.y;
//        return(temp);
//    }
//    void show()
//    {
//        cout << x << "+" << y<<"i";
//    }
//};
//int main()
//{
//    complex c1(2,3),c2(4,5),c3;
//    c3=c1+c2;
//    c3.show();
//}


//#include <iostream>
//using namespace std;
//class Complex
//{
//    private:
//        int real;
//        int img;
//    public:
//        Complex (int r = 0, int i = 0)
//        {
//            real = r;
//            img = i;
//        }
//        Complex add (Complex x)
//        {
//            Complex temp;
//            temp.real = real + x.real;
//            temp.img = img + x.img;
//            return temp;
//        }
//        void Display() 
//        {
//            cout << real << "+i" << img <<endl;
//        }
//};
//
//int main()
//{
//    Complex C1 (3, 7);
//    C1.Display();
//    Complex C2 (5, 2);
//    C2.Display();
//    Complex C3;
//    C3 = C1.add (C2);	
//    C3.Display();
//}



#include <iostream>
using namespace std;
class student
{
    private:
        int rollno;
        float fees;
    public:
        student(int a, float m)
        {
            rollno=a;
            fees=m;
        }
    operator int()
    {
        return(rollno);
    }
    operator float()
    {
        return fees;
    }
};
void main()
{
    int j;
    float f;
    student st(5,4200,50);
    j = st;
    f = st;
    cout << "\n value of j: " << j << "\n";
    cout << "\n value of f: " << f << "\n";
    getch();
}

