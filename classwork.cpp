

#include <iostream>
using namespace std;

class matrix
{
private:
	int row;
	int col;
	int **arr;

public:
	matrix(void)
	{
		this->row=0;
		this->col=0;
		this->arr=NULL;
		cout<<"in parameterless"<<endl;
		cout<<"this->row :"<<this->row<<endl;
		cout<<"this->col :"<<this->col<<endl<<endl;
	}
	matrix (int row,int col)
	{
		cout<<"In Parameterized"<<endl<<endl;
		this->row=row;
		this->col=col;
		cout<<this->row<<endl;
		cout<<this->col<<endl;

		arr=new int*[this->row];

		for(int i=0;i<row;++i)
			arr[i] =new int[this->col];




	}
	void accept()
	{

		cout<<"in accept"<<endl<<endl;
		for(int i=0;i<this->row;++i)
					{
						for(int j=0;j<this->col;++j)
						{
							cout<<"enter Values"<<endl;
							cin>>arr[i][j];
						}
					}


	}
	void print()
		{
		for(int i=0;i<row;++i)
						{
							for(int j=0;j<col;++j)
							{
								cout<<arr[i][j]<<"  ";

							}
							cout<<endl;
						}


		}

	~matrix(void)
	{
		for(int i=0;i<row;i++)
			delete arr[i];

		delete[] arr;
		arr=NULL;

	}


};

int main()
{

	matrix m1;
	int rows,cols;

	cout<<"Enter Rows"<<endl;
	cin>>rows;
	cout<<"Enter Columns"<<endl;
	cin>>cols;

	matrix m2(rows,cols);

	m2.accept();
	m2.print();

	return 0;
}
