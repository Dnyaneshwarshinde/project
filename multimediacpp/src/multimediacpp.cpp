#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int **ptr=new int*[2];

	for(int i=0;i<2;i++)
	{
		ptr[i]=new int[3];
	}

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the element: ";
			cin>>ptr[i][j];
		}
	}

	for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<ptr[i][j]<<" ";
			}
			cout<<endl;
		}

	for(int i=0;i<2;i++)
	{
		delete[] ptr[i];
	}

	delete[] ptr;
	ptr=NULL;



	return 0;
}
