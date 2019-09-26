
#include <iostream>
using namespace std;

class person
{
private:
	string name;
	int age;
public:
		person(void){
			cout<<"person(void)\n";

			this->name="";
			this->age=0;

		}
		person(string name,int age)
		{
			cout<<"	person(string name,int age)\n";
			this->name=name;
			this->age=age;
		}
		void getrecord()
		{
			cout<<"enter the name=\n";
			cin>>this->name;
			cout<<"enter the age=\n";
			cin>>this->age;
		}
		void showrecord()
		{
			cout<<"name=\n"<<this->name<<endl;
			cout<<"age=\n"<<this->age<<endl;
		}
		~person()
		{
			cout<<"~person()\n";
		}



};

class employee:public person
{
private:
	int empid;
	float salary;
public:

	employee(void)
{
		cout<<"employee(void)\n";
		this->empid=0;
		this->salary=0;

}

	employee(string name,int age,int empid,float salary):person(name,age)
	{
		cout<<"employee(string name,int age,int empid,float salary)\n";
		this->empid=empid;
		this->salary=salary;
	}

	void acceptrecord(void)

	{
		this->getrecord();
		cout<<"enter employee id=\n";

			cin>>this->empid;
			cout<<"Enter employee salary=\n";
			cin>>this->salary;
	}

	void displayrecord(void)
	{
		this->showrecord();
		cout<<"empid="<<this->empid<<endl;
		cout<<"salary="<<this->salary<<endl;

	}

	~employee()
	{
		cout<<"~employee\n";
	}

};

int main() {


	employee emp;
	emp.acceptrecord();
	emp.showrecord();
	emp.displayrecord();
	return 0;
}


int main1() {


	employee emp;
	emp.acceptrecord();
	emp.showrecord();
	emp.displayrecord();
	return 0;
}
