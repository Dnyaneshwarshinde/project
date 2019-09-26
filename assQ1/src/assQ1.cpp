

#include <iostream>
#include<string>
using namespace std;

int main()
{

	string cardnumber;

	int sum(0),sumofdoubleeven(0),sumofodd(0),evendigit(0),odddigit(0);

	cout<<" to check the credit card number is valid or not";

	do
	{
		cout<<"\n provide a credit card number to validate or type 'n'" ;
		cin>>cardnumber;

		if(cardnumber=="n")break;

		for(int digitpos=cardnumber.length();digitpos>0;digitpos--)
		{
			if(digitpos%2==0)
			{
				odddigit=(int)cardnumber[digitpos-1]-'0';
				sumofodd=sumofodd+odddigit;
			}
			else
			{
				evendigit=((int)cardnumber[digitpos-1]-'0')*2;
				evendigit=evendigit%10+evendigit/10;

				sumofdoubleeven=sumofdoubleeven+evendigit;

			}
		}

		sum=sumofodd+sumofdoubleeven;
		cout<<"\n the your provided number is ";
		if(sum%10==0)
			cout<<"valid";
		else
			cout<<"invalid";

	}while(cardnumber!="n");

	return 0;
}
