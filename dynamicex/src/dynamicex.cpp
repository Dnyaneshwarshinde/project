#include<stdlib.h>
#include<iostream>
using namespace std;
int main(void)
{
	int c;

	int *ptr=new (nothrow) int[88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888];
	if(ptr==NULL)
	{
		cout<<"NULL"<<endl;
	}
	else
	{
		cout<<ptr<<endl;
	}
	return 0;
}
