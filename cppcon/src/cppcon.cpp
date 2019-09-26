

#include <iostream>
using namespace std;

int main()
{
	const float pi=3.142;
	const float *ptr=&pi;

	cout<<"pi="<<pi<<endl;

	cout<<"*ptr="<<*ptr<<endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
