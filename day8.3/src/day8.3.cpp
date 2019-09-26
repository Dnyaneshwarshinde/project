
#include <iostream>
using namespace std;

class date
{
private:
	int day;
	int month;
	int year;
public:
		date(void){
			cout<<"date(void)\n";

			this->day=0;
			this->month=0;
			this->year=0;

		}
		date(int day,int month,int year)
		{
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void getrecord()
		{
			cout<<"enter the day=\n";
			cin>>this->day;
			cout<<"enter the month=\n";
			cin>>this->month;

			cout<<"enter the year=\n";
			cin>>this->year;
		}
		void showrecord()
		{
			cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;

		}
		~date()
		{
			cout<<"~person()\n";
		}



};

class employee
{
private:
	string name;
	int empid;
	float salary;
	date joindate;
public:

	employee(void)
{
		cout<<"employee(void)\n";
		this->empid=0;
		this->salary=0;

}
employee(string name,int empid,float salary,date joindate)
{
	this->name=name;
			this->empid=empid;
			this->salary=salary;
			this->joindate=joindate;

}
	employee(string name,int empid,float salary,int day,int month,int year):joindate(day,month,year)
	{
		this->name=name;
		this->empid=empid;
		this->salary=salary;
	}

	void acceptrecord(void)

	{

		cout<<"enter employee id=\n";

			cin>>this->empid;
			cout<<"Enter employee salary=\n";
			cin>>this->salary;
			this->joindate.getrecord();
	}

	void displayrecord(void)
	{

		cout<<"name="<<this->name<<endl;
		cout<<"empid="<<this->empid<<endl;
		cout<<"salary="<<this->salary<<endl;
		cout<<"joindate=";
				this->joindate.showrecord();

	}

	~employee()
	{
		cout<<"~employee\n";
	}

};

int main()
{
	string name="rohit";
	cout<<"sizeof(name)="<<sizeof(name)<<endl;
	int empid=22;
	float salary(30000);
	date joindate(20,12,2019);
	employee emp(name,empid,salary,joindate);
	emp.displayrecord();
}
int main3() {


	employee emp("dnyaneshwar",22,450000,26,12,2019);
	//emp.acceptrecord();
	emp.displayrecord();
	return 0;
}


int main1() {


	employee emp;
	emp.acceptrecord();
	emp.displayrecord();
	emp.displayrecord();
	return 0;
}
