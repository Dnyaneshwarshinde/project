

#include <iostream>
using namespace std;


namespace ncomplex
{
	class complex
	{

	private:
		int real;
		int imag;

	public:
		void accept()
		{
			cout<<"enter real:=\n";
			cin>>this->real;

			cout<<"enter imag=\n";
			cin>>this->imag;

		}

		void print()
		{
			cout<<"real:\n"<<this->real;
			cout<<"imag:\n"<<this->imag;
		}

		void setreal(int real)
		{
			this->real=real;
		}
		void setimag(int setimag)
		{
			this->imag=imag;
		}
	};
}
using namespace ncomplex;

int main()
{
	complex c1;


	cout<<"\t enter the value for c1::\n"<<endl;
	c1.accept();
	cout<<"c1::"<<endl;
		c1.print();


	int real, imag;
		cout<<"Enter Real :: ";
		cin>>real;
		cout<<"Enter imag :: ";
		cin>>imag;

		c1.setreal(real);
		c1.setimag(imag);

		cout<<"c1 :: print values using print function "<<endl;
			c1.print();
	return 0;
}
