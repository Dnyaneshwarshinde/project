#include<stdio.h>
#pragma pack(1)

struct emp
{
	int empno;
	char name[10];
	float sal;
};

void add(struct emp *e);
void display(const struct emp *e);
void setsalary(struct emp *e,float sal);
float getsalary(const struct emp *e);

int main
{


}
