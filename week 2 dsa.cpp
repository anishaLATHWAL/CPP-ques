

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define MAXSIZE 50

using namespace std;
class Stack
{
int s[MAXSIZE];
int top;
int n;
public:
Stack()
{
top=-1;
}
void push(int);
int pop();
bool isFull(); // true when full otherwise false
bool isEmpty(); // true when empty otherwise false
int getTop(); // return top most element from stack
void calculate(char *str);
};

void Stack::calculate(char *str)
{
int n1,n2,n3;
Stack s;

while(*str)
{
if(*str==' ' || *str=='\t')
{
str++;
continue;
}
if(isdigit(*str))
{
n=*str-'0';
push(n);
}
else
{
n2=pop();
n1=pop();
switch(*str)
{
case '+':
n3=n1+n2;
break;
case '-':
n3=n1-n2;
break;
case '*':
n3=n1*n2;
break;
case '/':
n3=n1/n2;
break;
case '^':
n3=pow(n1,n2);
break;
default:
cout<<"Invalid operator";
exit(1);
}
push(n3);
}
str++;
}
cout<<pop()<<endl;
}

int Stack::getTop()
{
int t=-1;
if(top==-1)
cout<<"Stack is underflow...!"<<endl;
else
t=s[top];
return t;
}
bool Stack::isFull()
{
if(top==MAXSIZE-1)
return true;
else
return false;
}
bool Stack::isEmpty()
{
if(top==-1)
return true;
else
return false;
}
void Stack::push(int x)
{
if(top==MAXSIZE-1)
cout<<"Stack is overflow..!"<<endl;
else
{
top++;
s[top]=x;
}
}
int Stack::pop()
{
int t=-1;
if(top==-1)
cout<<"Stack is underflow...!"<<endl;
else
{
t=s[top];
top--;
}
return t;
}
int main()
{
Stack s;
char expr[50];
cin.getline(expr,MAXSIZE);
s.calculate(expr);

return 0;
}




