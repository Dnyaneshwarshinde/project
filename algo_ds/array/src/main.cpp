#include<iostream>
using namespace std;

#include"array.h"
int main(void)
{
	int arr[size]={10,20,30,40,50};

	accept_array_ele(arr);
	display_array_ele(arr);
	cout<<"sum =="<<array_sum(arr)<<endl;
	cout<<"sum = "<<rec_array_sum(arr,0)<<endl;


	int key;
	cout<<"enter the key-\n";
	cin>>key;

	if(linear_search(arr,key))
	{
		cout<<"Key exists\n";
		cout<<"Comparisions="<<comparisons;
	}
	else
	{
		cout<<"Key does not exists";
		cout<<"comarisons="<<comparisons;
	}

	return 0;
}
