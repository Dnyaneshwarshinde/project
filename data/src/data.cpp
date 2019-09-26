

#include <iostream>
using namespace std;

class constdemo
{
	const int a;
	const int b;

	int c;
	mutable int d;

public:

	constdemo(): a(10),b(20),c(30),d(40)
			{
		//this->c=30;
		//this->d=40;
			}
	constdemo(int a,int b,int c,int d):a(a),b(b),c(c),d(d)
	{

	}
	void print() const
	{

		//c=33;
		d=44;

		cout<<"a="<<a<<endl;

		cout<<"b="<<b<<endl;
		cout<<"c="<<c<<endl;
		cout<<"d="<<d<<endl;
	}




	void display()
		{

			c=33;
			d=44;

			cout<<"a="<<a<<endl;

			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
			cout<<"d="<<d<<endl;
		}






};

int main()
{
	constdemo c1;
	cout<<"c1 using print function="<<endl;
	c1.print();

	cout<<"Using display function="<<endl;
	c1.display();



	constdemo c2(100,200,300,400);

	cout<<"c2 using print function="<<endl;
	c2.print();

	cout<<"c2 using display function="<<endl;

	c2.display();

	const constdemo c3;

	cout<<"c3 using print function="<<endl;

	c3.print();

	cout<<"size of c3="<<sizeof(c3)<<endl;
cout<<"==========";


cout<<"\n using display function"<<endl;

//c3.display();



	return 0;
}
