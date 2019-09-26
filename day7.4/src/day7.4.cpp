#include<memory.h>
#include<string>
#include <iostream>
using namespace std;

class Array
{

private:
	int size;
	int *arr;

public:
	Array(void)
{
		this->size=0;
		this->arr=NULL;

}

		Array(int size)
		{
			this->size=size;
			this->arr=new int[this->size];
		}

		Array(const Array &other)
		{
			this->size=other.size;
			this->arr=new int[this->size];
			memcpy(this->arr, other.arr, this->size * sizeof( int ) );
		}


		Array& operator=(const Array &other)
		{
			this->~Array();
			this->size=other.size;
			this->arr=new int[this->size];
			memcpy(this->arr,other.arr,this->size * sizeof(int));
			return *this;

		}

		~Array(void)
		{
			if(this->arr!=NULL)
				delete[] this->arr;
			this->arr=NULL;

		}
		friend istream& operator>>(istream &cin,Array &other);
		friend ostream& operator<<(ostream &cout,Array &other);
};

istream& operator>>(istream &cin,Array &other)
{
	for(int index=0;index<other.size;++index)
	{
		cout<<"enter the element:\n";
		cin>>other.arr[index];
	}
	return cin;
}
ostream& operator<<(ostream &cout, Array &other)
{
	for (int index=0;index<other.size;++index)
	{
		cout<<other.arr[index]<<endl;

	}
	return cout;
}




int main() {

	Array a1(3),a2(2);
	cin>>a1;
	a2=a1;
	cout<<a2;
	return 0;
}
