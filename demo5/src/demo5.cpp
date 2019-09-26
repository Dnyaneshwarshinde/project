#include <stdio.h>
namespace N1
{
	int no1=100;
	int no2=200;

}

int no1=100;

int main()
{
	int no1=10;
	printf("\n no1=%d [%u] local variable", no1, &no1);
		printf("\n no1=%d [%u] global variable", ::no1, &::no1);

		printf("\n N1::no1=%d [%u] variable from N1 namespace", N1::no1, &N1::no1);
		printf("\n N1::no2=%d [%u] varibale from N1 namespace", N1::no2, &N1::no2);


		using namespace N1;

		printf("\n no2=%d [%u] variable from N1 namepsace", no2, &no2);

		printf("\n no1=%d [%u] local variable ", no1, &no1);

		printf("\n N1::no1=%d [%u] variable from N1 namespace ", N1::no1, &N1::no1);


	return 0;
}
