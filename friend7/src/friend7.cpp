#include <iostream>
using namespace std;

class A
{
public:
	void sum();
	void sub();
	void multiplication();
};

class B
{
private:
	int num1;
	int num2;
public:

friend class A;
};
B::B(void)
{
	this->num1=20;
	this->num2=30;
}
void A::sum(void)
{
	B obj;
	int result=obj.num1+obj.num2;
cout<<"result:\n"<<result<<endl;
}
void A::sub(void)
{
	B obj;
	int result=obj.num1-obj.num2;
	cout<<"result:\n"<<result<<endl;
}
void A::multiplication(void)
		{
		B obj;
		int result=obj.num1*obj.num2;
		cout<<"result=\n"<<result<<endl;
		}

int main()
{
	sum();
	return 0;
}
