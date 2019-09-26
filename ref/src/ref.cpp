

#include <iostream>
using namespace std;

int main()
{

	int a=10;

	int &r=a;
	cout<<"a=="<<a<<"&a=="<<&a<<endl;
	cout<<"r=="<<r<<"&r=="<<&r<<endl;

	cout<<"================================"<<endl;

	a=100;
	cout<<"a=="<<a<<"&a=="<<&a<<endl;
	cout<<"r=="<<r<<"&r=="<<&r<<endl;
	cout<<"======================================"<<endl;

	r=1000;
	cout<<"a=="<<a<<"&a=="<<&a<<endl;
	cout<<"r=="<<r<<"&r=="<<&r<<endl;
	cout<<"================================="<<endl;


	++r;
	cout<<"a=="<<a<<"&a=="<<&a<<endl;
	cout<<"r=="<<r<<"&r=="<<&r<<endl;
	cout<<"==============================="<<endl;

	++a;

	cout<<"a=="<<a<<"&a=="<<&a<<endl;
	cout<<"r=="<<r<<"&r=="<<&r<<endl;
	cout<<"==========================="<<endl;

	//r=null;

	cout<<"a=="<<a<<"&a=="<<&a<<endl;
	cout<<"r=="<<r<<"&r=="<<&r<<endl;
	cout<<"=================================="<<endl;


	{
		int a1=150;
		const int &r1=a1;

		cout<<"a1=="<<a1<<"&a1=="<<&a1<<endl;
		cout<<"r1=="<<r1<<"&r1=="<<&r1<<endl;
		cout<<"================================="<<endl;


		a1=200;
		cout<<"a1=="<<a1<<"&a1=="<<&a1<<endl;
		cout<<"r1=="<<r1<<"&r1=="<<&r1<<endl;
		cout<<"================================="<<endl;

	}
	{

		const int a2=500;
		const int &r2=a2;

		cout<<"a2=="<<a2<<"&a2=="<<&a2<<endl;
		cout<<"r2=="<<r2<<"&r2=="<<&r2<<endl;
		cout<<"================================="<<endl;
	}







	return 0;
}
