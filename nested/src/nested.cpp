
#include <iostream>
using namespace std;


namespace n1
{
		int no1=100;
		int no2=200;

		namespace n2
		{
		int no1=1000;
		int no2=2000;
		}
}

int no1=100;

//using namespace n1;
//using namespace n1::n2;

int main()
{
	int no1=10;

	cout<<"no1:"<<no1<<"&no1"<<&no1<<"Local variable "<<endl;
	cout<<"::no1"<<::no1<<"::&no1"<<&no1<<"Global variable"<<endl;
	cout<<"=================================================================================";

	cout<<"n1::no1="<<n1::no1<<"&n1::no1"<<&n1::no1<<"Using namespace n1"<<endl;

	using namespace n1;
			cout<<"no1="<<no1<<"&no1"<<&no1<<"using namespace n2"<<endl;

	cout<<"n1::n2::no1==="<<n1::n2::no1<<" \nnamesapace n1 & n2"<< &n1::n2::no1<<"address of no1";










	return 0;
}
