#include <iostream>
#include<string>
using namespace std;

class StackOverflowException
{
	string msg;

public:
	StackOverflowException(string msg)
	{
		this->msg=msg;
	}
	string getMessage(void)
	{
		return this->msg;
	}
};

class StackUnderflowException
{
	string msg;

public:
	StackUnderflowException(string msg)
	{
		this->msg=msg;
	}
	string getMessage(void)
	{
		return this->msg;
	}
};


#define size 5
class stack
{
private:
	int top;
	int arr[size];


public:
	stack (void)
{
		this->top=-1;
}
	bool empty(void)
	{
		return this->top==-1;
	}
	bool full(void)
	{
		return this->top==size-1;
	}
	void push(int element)
	{
		if(this->full())
			throw StackOverflowException("stack is full");
			this->arr[++this->top]=element;

	}
	int peek(void)
	{
		if(this->empty())
			throw StackUnderflowException("stack is empty");
		return this->arr[this->top];

	}

	void pop(void)
	{
		if(this->empty())
			throw StackUnderflowException("stack is empty");
		--this->top;
	}

};

void acceptRecord(int &element)
{

	cout<<"Enter the element=\n";
	cin>>element;
}

void printRecord(int &element)
{
	cout<<"popped elemnt is="<<element<<endl;

}
int menuList(void)
{
	int choice;
	cout<<"0.exit"<<endl;
	cout<<"1.push"<<endl;
	cout<<"2.pop"<<endl;
	cout<<"ENter the choice:\n";
	cin>>choice;
return choice;
}


int main()
{
	int choice,element;
	stack stk;
	while((choice=::menuList())!=0)
	{
		try
		{
			switch(choice)
			{
			case 1:
				::acceptRecord(element);
				stk.push(element);
				break;
			case 2:
				element=stk.peek();
				::printRecord(element);
				stk.pop();
			}
		}
		catch(StackOverflowException &ex)
		{
			cout<<ex.getMessage()<<endl;
		}
		catch(StackUnderflowException &ex)
		{
			cout<<ex.getMessage()<<endl;
		}
	}

	return 0;
}
