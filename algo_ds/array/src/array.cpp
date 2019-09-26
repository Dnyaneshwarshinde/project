#include <iostream>
using namespace std;
#include<iomanip>
#include"array.h"
int comparisons=0;

bool linear_search(int arr[],int key)
{
	comparisons=0;

	for(int index=0;index<size;index++)
	{
		comparisons++;
		if(arr[index]==key)
		{
			return true;
		}

	}

	return false;

}

void accept_array_ele(int arr[])
{
	cout<<"\n Enter the array elements=";
	for(int index=0;index<size;index++)
	{

		cout<<"enter arr["<<index<<"]:";
		cin>>arr[index];
	}
}

void display_array_ele(int arr[])
{
	cout<<"\n Display array elements=";
	for(int index=0;index<size;index++)
	{
		cout<<setw(4)<<left<<arr[index];
	}
	cout<<endl;
}

int array_sum(int arr[])
{
	int sum=0;
	for(int index=0;index<size;index++)
		sum+=arr[index];

	return sum;
}


int rec_array_sum(int arr[],int index)
{
	if(index==size)
		return 0;
	return(arr[index]+rec_array_sum(arr,index+1));


}




