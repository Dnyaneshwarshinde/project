
#include <iostream>
using namespace std;

int sum(int n1,int n2)
{
	return n1+n2;
}
float sum(int n1,float n2)
{
	return n1+n2;
}


int main()
{
	int result=0;
	result= sum(10,20);
	cout<<"result="<<result<<endl;

	float result1=0;
	result1= sum(10,20.2f);
	cout<<"result1="<<result1<<endl;

	return 0;
}
