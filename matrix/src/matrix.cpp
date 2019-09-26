#include<iostream>
using namespace std;

class Array
{
private:
	int row;
	int col;
	int **arr;
public:
	Array( void )
	{
		this->row = 0;
		this->col = 0;
		this->arr=NULL;
		cout<<"In parameter less"<<endl;
		cout<<"this->row:"<<this->row<<endl;
		cout<<"this->row:"<<this->col<<endl;
	}
	Array( int row,int col )
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
	void acceptRecord( void )
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
	void print()
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






	~Array( void )
	{
		for(int i=0;i<row;i++)
		{
			delete arr[i];
		}
		delete[] arr;
		arr=NULL;
	}
};
int main( void )
{
	Array a1;
	int rows,cols;
	cout<<"enter rows:"<<endl;
	cin>>rows;
	cout<<"enter cols"<<endl;
	cin>>cols;

	Array m2(rows,cols);




	m2.acceptRecord();
	m2.print();
	return 0;
}
