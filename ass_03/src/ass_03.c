#include <stdio.h>
#include <stdlib.h>

typedef struct structdate {
	int day;
	int month;
	int year;
} date;

void init_date(date* const p) {

	p->day = 00;
	p->month = 00;
	p->year = 0000;
	//date d;
	//printf("\n Enter the date in dd/mm/yy:");
	//scanf("%d/%d/%d",d.day,d.month,d.year);
}

void valid_date(date* const p) {
	int a = 0;
	int valid = 1;
	//a=(p->year%4==0 && p->year%100!=0) ||(p->year
	if ((p->year % 4 == 0 && p->year % 100 != 0) || (p->year % 400 == 0))
	{
		a = 1;

	}

	if (p->month >= 1 && p->month <= 12) {
		if (p->month == 2)
		{
			if (a && p->day == 29)
			{
				valid = 1;
			} else
			{
				valid = 0;
			}
		}
		else if (p->month == 2 || p->month == 4 || p->month == 6 || p->month == 9 || p->month == 11) {
			if (p->day > 30)
			{
				valid = 0;
			}
		}
		else if (p->day > 31)
		{
			valid = 0;

		}
	}
	else
	{
		valid = 0;
	}

	if (valid == 1)

	{
		printf("Date is valid\n");
	}
	else
	{
		printf("date is invalid\n");
	}

}
void add_days(date* const p, int days)
{
//p->=0;

}
void accept_record(date* const p) {
	printf("\n Enter the date in dd/mm/yy:");
	scanf("%d/%d/%d", &p->day, &p->month, &p->year);

}
void print_record(date* const p) {
	printf("\n date in dd/mm/yy:\n");
	printf("%d/%d/%d", p->day, p->month, p->year);

}

int main(void) {
	date* p;
	init_date(&p);
	accept_record(&p);
	print_record(&p);
	valid_date(&p);

	return 0;
}
