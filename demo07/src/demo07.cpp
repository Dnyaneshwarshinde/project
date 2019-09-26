#include <stdio.h>
#pragma pack(1)

struct emp
{

private	:
	int empno;
	char name[10];
	float sal;

public:
		void accept()
		{
				printf("\n Enter EMPNO::");
				scanf("%d", &this->empno);

				printf("enter name::");
				scanf("%s",this->name);

				printf("\n Enter the salary::");
				scanf("%f", &this->sal);

				return;
		}
		void display()
		{
			printf("\n empno name sal \n");
			printf("%-8d%-10s%-8.2f",this->empno,this->name,this->sal);
			return;
		}
		void setsalary(float sal)
		{
			this->sal=sal;
			return;
		}

		float getsalary()
		{
			return this->sal;
		}

};


int main() {
	emp e1;
	float newsal;

	printf("enter employee info\n");
	e1.accept();
	printf("employee info in main correct output\n");
	e1.display();

	printf("enter the new salry\n");

	scanf("%f",&newsal);

	e1.setsalary(newsal);;

	printf("Updated salary\n");

	e1.display();
	newsal=e1.getsalary();
	printf("\n newsal=%2f", newsal);
	printf("\n\n");

	return 0;
}
