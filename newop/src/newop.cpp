#include<stdlib.h>
#include<iostream>
using namespace std;
int main(void)
{
	int arr[5]={10,20,30};
	int *ptr=new (&arr[3]) int(40);
	for (int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
