
#include <iostream>
using namespace std;
//int sum(int a=0,int b=0,int c=0,int d=0);

int sum(int a=0,int b=0,int c=0,int d=0)
{
	//cout<<"a"<<a<<"b"<<b<<"c"<<c<<"d"<<d<<endl;

	return a+b+c+d;
}

int main()
{
	int result;
	result=sum(10,20,30,40);
	cout<<"result="<<result<<endl;

	result =sum(10,20,30);
	cout<<"result="<<result<<endl;

	result =sum(10,20);
		cout<<"result="<<result<<endl;

		result =sum(10);
			cout<<"result="<<result<<endl;

			result =sum();
				cout<<"result="<<result<<endl;
	return 0;
}
