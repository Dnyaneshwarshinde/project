#include <iostream>
using namespace std;
class complex {

private:
	int real;
	int imag;
public:
	complex(void) {
		cout << "Complex (void)" << endl;
		this->real = 0;
		this->imag = 0;

	}
	complex(int value) {
		cout << "complex (int value)\n";
		this->real = value;
		this->imag = value;
	}

	complex(int real, int imag) {
		cout << "complex (int real,int imag\n";
		this->real = real;
		this->imag = imag;
	}

	complex(const complex &other) {
		cout << "complex(const complex &other\n";
		this->real = other.real;
		this->imag = other.imag;

	}
	complex& operator=(const complex &other) {
		cout << "void operator(const complex &other\n";
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	operator int(void) {
		return this->real;
	}

	//friend istream& operator>>(istream &cin,complex &other);
	friend ostream& operator<<(ostream &cout, complex &other);
};

/*istream& operator>>(istream &cin,complex &other)
 {
 cout<<"Enter the real number:\n";
 cin>>other.real;
 cout<<"Enter the imag number:\n";
 cin>>other.imag;
 return cin;
 }*/

ostream& operator<<(ostream &cout, complex &other) {
	cout << "Real number=\n" << other.real << endl;
	cout << "Imag number=\n" << other.imag << endl;
	return cout;
}

int main2() {
	complex c1(10, 20);
	int real = c1;

	cout << "Real " << real << endl;
	return 0;
}
int main() {

	int number = 10;
	complex c1;
	c1 = number;
	cout << c1;
	return 0;
}

int main1() {

	int number = 10;
	return 0;
}
