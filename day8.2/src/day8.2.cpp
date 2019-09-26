

#include <iostream>
using namespace std;

class singleton
{
private:
	int number;
	singleton(void)
	{
		this->number=0;

	}
private:
	singleton(const singleton &other)
	{
		this->number=other.number;
	}
public:

		int getnumber(void)
		{
			return this->number;
		}
		void setnumber(int number)
		{
			this->number=number;
		}
		static singleton& getinstance(void)
		{
			static singleton instance;
			return instance;
		}


};

int main() {

	singleton &s1= singleton::getinstance();
	s1.setnumber(100);
	cout<<"number=  \n"<<s1.getnumber()<<endl;

	return 0;
}
