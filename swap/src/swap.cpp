

#include <iostream>
using namespace std;
void swap(int n1,int n2);
int main()
{
	int no1=10,no2=30;
	cout<<"before swap in main\n"<<"no1=\n"<<no1<<"&no1=\n"<<&no1<<"no2==\n"<<no2<<"&no2=\n"<<&no2<<endl;
	swap(no1,no2);
	cout<<"after swap in main\n"<<"no1=\n"<<no1<<"&no1=\n"<<&no1<<"no2==\n"<<no2<<"&no2=\n"<<&no2<<endl;
	return 0;
}

void swap(int n1,int n2)
{
	int temp=0;
	cout<<"before swap in swap n1="<<n1<<"&n1"<<&n1<<"n2="<<n2<<"&n2=="<<&n2<<endl;
	temp=n1;

	n1=n2;

	n2=temp;

	cout<<"n1="<<n1<<"&n1="<<&n1<<"n2="<<n2<<"&n2=="<<&n2<<endl;
}
