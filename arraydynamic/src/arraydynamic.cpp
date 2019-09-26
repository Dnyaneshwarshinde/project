#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int *ptr=new int[3];
cout<<"ENter the numbers"<<endl;
for(int i=0;i<3;++i)
	cin>>ptr[i];
for(int i=0;i<3;++i)
	cout<<ptr[i]<<endl;
delete[] (ptr);
ptr=NULL;

	return 0;
}
