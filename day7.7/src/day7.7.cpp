#include<string>
#include <iostream>
using namespace std;

template<class A,class B>

void swap_object(A &x, B &y)
{
	A temp=x;
	x=y;
	y=temp;
}
int main() {

	float a=10.1f;
	double b=20;
	swap_object<float,double>(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	return 0;
}
