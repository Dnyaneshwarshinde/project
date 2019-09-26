
#include <iostream>
using namespace std;

int main()
{
int *ptr =new int;
*ptr= 125;
cout<<"value ="<<*ptr<<endl;

delete ptr;
ptr=NULL;


	return 0;
}
