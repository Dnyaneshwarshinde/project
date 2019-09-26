#include <iostream>
#include<stack>
#include<queue>

using namespace std;


void print(void)
{
	int x=0;
	x++;
	cout<<"x=="<<x<<endl;

}
int main1() {

	stack<int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	int element=0;
	while(!stk.empty())
	{
		element=stk.top();
		cout<<"popped element is: "<<element<<endl;
		stk.pop();
	}


	return 0;
}
int main() {

	queue<int> que;
	que.push(10);
	que.push(20);
	que.push(30);
	int element=0;
	while(!que.empty())
	{
		element=que.front();
		cout<<"popped element is: "<<element<<endl;
		que.pop();
	}


	return 0;
}
