#include<iostream>
#define MAX 5
using namespace std;
class Queue{
    int q[MAX];
    int front,rear;
    public:
    Queue(){
        rear=front=-1;
        
    }
    void insert(int x);
    int Delete();
    bool isEmpty();
    bool isFull();
    int getFront();
};
int Queue::getFront(){
   if(front==rear){
        cout<<"Q is underflow : ";
        return -1;
    }
    else{
        //front++;
        return q[front+1];
    }
      
}
int Queue::Delete(){
    if(front==rear){
        cout<<"Q is underflow : ";
        return -1;
    }
    else{
        front++;
        return q[front];
    }
    
}
void Queue::insert(int x){
    if(rear==MAX-1){
        cout<<"Q is full"<<endl;
    }
    else{
        rear++;
        q[rear]=x;
    }
}
int main(){
    Queue qq;
    int x;
    while(cin>>x){
        qq.insert(x);
    }
    cout<<qq.Delete()<<endl;
    cout<<qq.Delete()<<endl;
    cout<<qq.getFront()<<endl;
    return 0;
}



//#include<iostream>
//#define MAX 5
//using namespace std;
//class CQ{
//    int q[MAX];
//    int front,rear;
//    public:
//    CQ()
//    {
//        rear=front=-1;
//        
//    }
//    void insert(int x);
//    int Delete();
//};
//
//int CQ::Delete()
//{
//    int t;
//    if (front == -1)
//    {
//        cout << "CQ is empty: ";
//        return -1;
//    }
//    else if(front == rear)
//    {
//        t= q[front];
//        front= -1;
//        rear= -1;
//        return t;
//    }
//    else if (front ==MAX-1)
//    {
//        t=q[front];
//        front=0;
//        return t;
//    }
//    else
//    {
//        t=q[front];
//        front++;
//        return t;
//    }
//}
//
//
//
//void CQ::insert(int x)
//{ 
//    if ((front==0 && rear==MAX-1) || (rear==front-1))
//    {
//        cout << "CQ is full" << endl;
//    }
//    else if(front == -1 && rear==-1)
//    {
//        front = rear=0;
//        q[rear]=x;
//    }
//    else if(front!=0 && rear== MAX-1)
//    {
//        rear=0;
//        q[rear]=x;
//    }
//    else
//    {
//        rear++;
//        q[rear]=x;
//    }
//}
//
//
//
//
//int main(){
//    CQ c;
//    int x;
//    while(cin>>x){
//        c.insert(x);
//    }
//    cout << c.Delete() << endl;
//    cout << c.Delete() << endl;
//    c.insert(33);
//    c.insert(34);
//    c.insert(35);
//    return 0;
//}
