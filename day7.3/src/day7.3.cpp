#include <iostream>
using namespace std;
class complex
{

private:
	int real;
	int imag;
public:
	complex (void)
{
		cout<<"Complex (void)"<<endl;
		this->real=0;
		this->imag=0;

}

	complex(int real,int imag)
	{
		cout<<"complex (int real,int imag\n";
		this->real=real;
		this->imag=imag;
	}

	complex(const complex &other)
	{
		cout<<"complex(const complex &other\n";
		this->real=other.real;
		this->imag=other.imag;

	}
	complex& operator=(const complex &other)
	{
		cout<<"void operator(const complex &other\n";
		this->real=other.real;
		this->imag=other.imag;
		return *this;
	}

	friend istream& operator>>(istream &cin,complex &other);
		friend ostream& operator<<(ostream &cout,complex &other);
};


istream& operator>>(istream &cin,complex &other)
{
	cout<<"Enter the real number:\n";
	cin>>other.real;
	cout<<"Enter the imag number:\n";
	cin>>other.imag;
	return cin;
}

ostream& operator<<(ostream &cout,complex &other)
{
	cout<<"Real number=\n"<<other.real<<endl;
	cout<<"Imag number=\n"<<other.imag<<endl;
	return cout;
}


int main1()
{
	complex c1(10,20);
	complex c2;
	complex c3;
	c3=c2=c1;
	cout<<c3<<endl;
	return 0;
}
int main() {

complex c1(10,20);
complex c2;
c2=c1;
cout<<c2<<endl;

	return 0;
}
