
#include <iostream>
using namespace std;

class com
{
private:
	int imag;

public:
	int real;

	com(void)
	{
		cout<<"com(void)";
		this->real=0;
		this->imag=0;
	}
	com(int real,int imag)
	{
		cout<<"com in real,imag\n";
		this->real=real;
		this->imag=imag;
	}
	void accept_record()
	{
		cout<<"Enter the real number:\n";
		cin>>this->real;
		cout<<"Enter the imag number:\n";
		cin>>this->imag;
	}
	void print_record()
	{
		cout<<"Real number="<<this->real<<endl;
		cout<<"imag number="<<this->imag<<endl;
	}

};

int main()
{
	com **arr=new com*[3];
	for(int i=0;i<3;i++)
	{
		int real;
		cout<<"Enter the real number=\n";
		cin>>real;
		int imag;
		cout<<"Enter imag number=\n";
		cin>>imag;
		arr[i]=new com(real,imag);
	}
	for(int i=0;i<3;i++)
	{
		arr[i]->print_record();

	}
	for(int i=0;i<3;i++)
	{
		delete arr[i];
	}
	delete[] arr;

	arr=NULL;
	return 0;

}
int main7()
{
	com arr[3]={com(10,20),com(30,40),com(50,60)};
	for(int i=0;i<3;i++)
	{
		arr[i].print_record();
	}
	return 0;
}

int main6()
{
	com *arr=new com[3];
	for(int i=0;i<3;i++)
	{
		arr[i].accept_record();
	}
	for(int i=0;i<3;i++)
	{
		arr[i].print_record();
	}
	delete[] arr;
	arr=NULL;
	return 0;
}

int main5()
{
	com arr[3];
	for(int i=0;i<3;i++)
	{
	arr[i].accept_record();
	}
	for(int i=0;i<3;i++)
		{
		arr[i].print_record();
		}
return 0;
}
int main4()
{
	com *ptr=new com(30,40);
	ptr->print_record();
	delete ptr;
	ptr=NULL;
	return 0;
}



int main3()
{
	com c1(10,20);
	c1.print_record();
	return 0;
}
