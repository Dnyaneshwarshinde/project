#include<iostream>
using namespace std;

#include"../include/Array.h"

Array::Array( void )
	{
		this->row = 0;
		this->col = 0;
		this->arr=NULL;
		cout<<"In parameter less"<<endl;
		cout<<"this->row:"<<this->row<<endl;
		cout<<"this->row:"<<this->col<<endl;
	}
Array::Array( int row,int col )
	{
		cout<<"In parameterized"<<endl;
		this->row=row;
		this->col=col;
		cout<<this->row<<endl;
		cout<<this->col<<endl;

		arr=new int*[this->row];
		for(int i=0;i<row;i++)
			arr[i]=new int[this->col];
	}
void Array::acceptRecord( void )
	{
		cout<<"in accept"<<endl;

		for(int i=0;i<this->row;++i)
		{
			for(int j=0;j<this->col;++j)
			{
				cout<<"Enter the values"<<endl;
				cin>>arr[i][j];
			}
		}

	}
void Array:: print()
	{

			for (int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<arr[i][j]<<" ";

				}
				cout<<endl;
			}
	}


Array::~Array( void )
	{
		for(int i=0;i<row;i++)
		{
			delete arr[i];
		}
		delete[] arr;
		arr=NULL;
	}

