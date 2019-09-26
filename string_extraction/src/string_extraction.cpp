#include<string.h>
#include <iostream>
using namespace std;

class complex
{
private:
	size_t length;
	char *buffer;
public:
	complex (void)
		{
			this->length=0;
			this->buffer=NULL;
		}
		complex(int length)
		{
			this->length=length;
			this->buffer=new char[this->length+1];
		}
		complex (const char *str)
		{
			this->length=strlen(str);
			this->buffer=new char[this->length+1];
			strcpy(this->buffer,str);
		}
		istream& operator>>(istream &cin,complex &other)
		{
			cout<<"enter string:\n";
			cin>>other.&buffer;
			return cin;
		}
		void printRecord(void)
		{
			if(this->buffer!=NULL)
				cout<<"Name=="<<this->buffer<<endl;

		}

		~complex (void)
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

	complex s1,s2;
	cin>>s1;
	cout<<s1;



	 /*string s1="gggg";
	 s1.length();
	 s1.append("gggg");*/

	return 0;
}
