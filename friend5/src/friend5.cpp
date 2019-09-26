
#include <iostream>
using namespace std;

class test
{
private:
	int num1;
protected:
	int num2;

public:
		test(void)
{
			this->num1=20;
			this->num2=30;
}
			friend void print();

};

void print (void)
{
		test t;
		cout<<"num1=  "<<t.num1<<endl;
		cout<<"num2=  "<<t.num2<<endl;
}
int main()
{
	print();
	return 0;
}
