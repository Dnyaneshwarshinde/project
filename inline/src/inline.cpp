#include <iostream>
using namespace std;
#define sq(a) a*a
#define sq1(a) (a)*(a)

inline int square (int a);
int main()
{
	int x=5,y=0;
	y=sq(x);
	cout<<"using macro x="<<x<<"y="<<y<<endl;

	y=sq(x+x);

	cout<<"using macro x="<<x<<"\t y="<<y<<endl;

	y=sq1(x+x);
	cout<<"using macro x="<<x<<"\t y="<<y<<endl;

	y=25/sq(x);

	cout<<"using mcro x ="<< x<<"\t y="<<y<<endl;

	return 0;
}
inline int square(int a)
{
	return a*a;
}
