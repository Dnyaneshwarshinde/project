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
		this->real=0;
		this->imag=0;

}

	complex(int real,int imag)
	{
		this->real=real;
		this->imag=imag;
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

int main()
{
	complex c1,c2;
	cin>>c1>>c2;
	cout<<c1<<c2;
	return 0;
}
int main1() {


	complex c1;
	cin>>c1;
	cout<<c1;

	return 0;
}
