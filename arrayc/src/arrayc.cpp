#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int *ptr=(int*) malloc(3*sizeof(int));
if(ptr!=NULL)
{
	for(int i=0;i<3;++i)
		cin>>ptr[i];
	for(int i=0;i<3;++i)
		cout<<ptr[i]<<endl;
	free(ptr);
	ptr=NULL;

}
else
	cout<<"Bad memory allocation";
//for(int i=0;i<3;++i)
	//cin>>ptr[i];
//for(int i=0;i<3;++i)
	//cout<<ptr[i]<<endl;

	return 0;
}
