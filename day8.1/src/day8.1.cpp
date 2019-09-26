#include <iostream>
using namespace std;

class
{
public:

public:
	void print(void)
	{
		cout<<"void print(void)\n"<<endl;

	}
	static void display(void)
	{
		cout<<"static void display(void)\n";
	}
}t1;
int main() {
	t1.display();
	t1.print();
	return 0;
}
