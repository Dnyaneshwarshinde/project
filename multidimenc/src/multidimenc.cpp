#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int **ptr=(int**)malloc(2*sizeof(int*));
for(int i=0;i<2;i++)
	ptr[i]=(int*)malloc(3*sizeof(int));
for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<"enter element:";
		cin>>ptr[i][j];

	}
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	{
	//	cout<<"display element:";
		cout<<ptr[i][j]<<" ";

	}
	cout<<endl;
}

//if(ptr!=NULL)
//{
	//for(int i=0;i<3;++i)
		//cin>>ptr[i];
	//for(int i=0;i<3;++i)
		//cout<<ptr[i]<<endl;
//	free(ptr);
	//ptr=NULL;

//}
//else
	//cout<<"Bad memory allocation";
//for(int i=0;i<3;++i)
	//cin>>ptr[i];
//for(int i=0;i<3;++i)
	//cout<<ptr[i]<<endl;

	return 0;
}
