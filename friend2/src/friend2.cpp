
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
	com *ptr=new com();
	ptr->accept_record();
	ptr->print_record();
	delete ptr;
	ptr=NULL;
	//c1.print_record();
	return 0;
}
