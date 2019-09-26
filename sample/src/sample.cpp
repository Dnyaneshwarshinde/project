#include <iostream>
#include <string>
using namespace std;
int main()
{

string type, num;

int sum = 0, i;

cout << "Please enter the type of card: Visa or MasterCard? \n" <<endl;

cin >> type;

if(type=="Visa"){
cout << "Please enter the 16 digit card number? ";
cin>>num;
for(i = 0; i < 16; i++){
sum += (num[i] - 48);}
sum %= 10;
if(sum == 0 && num.size() == 16) cout << "Its a valid Visa card.\n";
else cout << "Invalid Card\n";
}
else if(type=="MasterCard"){
cout << "Please enter the 16 digit card number? ";
cin>>num;
for(i = 0; i < 16; i++){
sum += (num[i] - 48);}
sum %= 10;
if(sum == 1 && num.size() == 16) cout << "Its a valid MasterCard.\n";
else cout << "Invalid Card\n";
}
//system ("pause");
return 0;
}
