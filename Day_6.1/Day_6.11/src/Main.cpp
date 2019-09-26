#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	Complex operator+( Complex &other )
	{
		Complex temp;
		temp.real = this->real + other.real;
		temp.imag = this->imag + other.imag ;
		return temp;
	}
	Complex operator+( int value )
	{
		Complex temp;
		temp.real = this->real + value;
		temp.imag = this->imag + value;
		return temp;
	}
	/*bool operator==( Complex &other )
	{
		if( this->real == other.real && this->imag == other.imag)
			return true;
		else
			return false;
	}*/
	/*bool operator==( Complex &other )
	{
		if( this->real == other.real && this->imag == other.imag)
			return true;
		return false;
	}*/
	bool operator==( Complex &other )
	{
		return this->real == other.real && this->imag == other.imag;
	}
	Complex operator+=( Complex &other )
	{
		this->real += other.real;
		this->imag += other.imag;
		return *this;
	}
	Complex operator++( void )	//Pre-Increment
	{
		Complex temp;
		temp.real = ++ this->real;
		temp.imag = ++ this->imag;
		return temp;
	}
	Complex operator++( int  )	//Post-Increment
	{
		Complex temp;
		temp.real =  this->real ++;
		temp.imag =  this->imag ++;
		return temp;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1( 10, 20 );
	Complex c2 =  c1 ++;		//c2 = c1.operator++( 0 );
	c1.printRecord();
	cout<<endl;
	c2.printRecord();
	return 0;
}
int main9( void )
{
	Complex c1( 10, 20 );
	Complex c2 = ++ c1;	//c2 = c1.operator++( )
	c1.printRecord();
	cout<<endl;
	c2.printRecord();
	return 0;
}
int main8( void )
{
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	Complex c3;

	c3 = c1 += c2;	//c1.operator+=( c2 )

	c3.printRecord();
	return 0;
}
int main7( void )
{
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	c1 += c2;	//c1.operator+=( c2 )
	c1.printRecord();
	c2.printRecord();
	return 0;
}
int main6( void )
{
	Complex c1( 10, 20 );
	Complex c2( 10, 20 );
	cout<<( c1 == c2 ? "Equal" : "Not Equal")<<endl;
}
int main5( void )
{
	Complex c1( 10, 20 );
	Complex c2( 10, 20 );
	if( c1 == c2 )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
}
int main4( void )
{
	Complex c1( 10, 20 );
	Complex c2( 10, 20 );
	bool status = c1 == c2;	//status = c1.operator==( c2 )
	if( status )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
}
int main3( void )
{
	Complex c1( 10, 20 );
	Complex c2( 10, 20 );
	bool status = c1 == c2;	//status = c1.operator==( c2 )
	if( status == true )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
}
int main2( void )
{
	Complex c1(10,20);
	Complex c2 = c1 + 5;	//c2 = c1.operator+( 5 )
	//Complex c2 = 5 + c1;	//c2 = 5.operator+( c1 ) // Not OK
	c2.printRecord();
	return 0;
}
int main1( void )
{
	Complex c1(10,20);
	Complex c2(30,40);
	Complex c3;
	c3 = c1 + c2;	//c3 = c1.operator+( c2 );
	c3.printRecord();
	return 0;
}
