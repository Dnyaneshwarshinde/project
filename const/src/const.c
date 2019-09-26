#include <stdio.h>

int main(void)
{
	const float pi=3.142f;
	float *ptr=&pi;
	printf("\n pi=%.3f",pi);
	*ptr =3.14;
	printf("\n *ptr=%.3f pi=%.3f", *ptr,pi);

	return 0;
}
