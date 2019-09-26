
#include <iostream>
using namespace std;

int main()
{
	cout<<"int data type";
	{
		int no1,no2;

		cout<<"Enter no1:";
		cin>>no1;

		cout<<"Enter no 2:";
		cin>>no2;

		cout<<"no1:"<<no1<<"&no1"<<&no1<<endl;
		cout<<"no2:"<<no2<<"&no2"<<&no2<<endl;
	}
	cout<<endl;

	cout<<"float data type";
	{

		float no1,no2;

		cout<<"Enter no 1:";
		cin>>no1;

		cout<<"Enter no 2";

		cin>>no2;

		cout<<"no1:"<<no1<<"[&no1]"<<&no1<<endl;

		cout<<"no2"<<no2<<"[&no2]"<<&no2<<endl;
	}

	cout<<endl;

	cout<<"Char data type";
	{
		char no1,no2;
		cout<<"Enter no 1:";
				cin>>no1;

				cout<<"Enter no 2";

				cin>>no2;

				cout<<"no1:"<<no1<<"[ &no1]"<<(void*)&no1<<endl;

				cout<<"no2"<<no2<<" [&no2]"<<(void*)&no2<<endl;



	}


	return 0;
}
