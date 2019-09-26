#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int *ptr = (int*)malloc (sizeof(int));
if(ptr!=NULL)
{
*ptr=125;
cout<<"values ="<<*ptr<<endl;
free(ptr);
ptr=NULL;
}
delete ptr;
ptr=NULL;


	return 0;
}
