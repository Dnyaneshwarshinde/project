#include<string>
#include <iostream>
using namespace std;

template<class T>

void swap_object(T &x, T &y)
{
	T temp=x;
	x=y;
	y=temp;
}
int main() {

	int a=10;
	int b=20;
	swap_object(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	return 0;
}
