#include <iostream>
#define MAXSIZE 5
using namespace std;

class stack
{
	int s[MAXSIZE];
	int top;
	public:
		stack{
		top= -1;
	}
	void push(int);
	int pop();
};
void stack::push(int x)
{
	if (top==MAXSIZE-1)
	{
		cout << "Overflow";
	}
	else{
		s[top++]=x;
	}
}

int stack::pop()
{
	int t;
	if (top== -1){
		cout << "Stack is underflow";
	}
	else{
		t= s[top];
		top--;
	}
	return t;
}
s






