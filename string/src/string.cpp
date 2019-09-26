#include<string.h>
#include <iostream>
using namespace std;

class sample
{
private:
	size_t length;
	char *buffer;
public:
	sample (void)
		{
			this->length=0;
			this->buffer=NULL;
		}
		sample(int length)
		{
			this->length=length;
			this->buffer=new char[this->length+1];
		}
		sample (const char *str)
		{
			this->length=strlen(str);
			this->buffer=new char[this->length+1];
			strcpy(this->buffer,str);
		}
		void acceptRecord(void)
		{
			cout<<"enter name="<<endl;
			cin>>this->buffer;

		}

		void printRecord(void)
		{
			if(this->buffer!=NULL)
				cout<<"Name=="<<this->buffer<<endl;

		}

		~sample (void)
		{
			if(this->buffer!=NULL)
			{
				delete[] this->buffer;
				this->buffer=NULL;
			}
		}
};
int main()
{
	sample s1 ("SunBeam");
	s1.printRecord();



	 /*string s1="gggg";
	 s1.length();
	 s1.append("gggg");*/

	return 0;
}
