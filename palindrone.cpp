#include<iostream>
using namespace std;
int main()
{
	int n,temp,digit,reverse;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	temp=n;
	reverse=0;
	while(temp>0)
	{
		digit=temp%10;
		reverse=reverse*10+digit;
		temp=temp/10;
	}
	if(reverse==n)
	{
		cout<<"the no is palindrone"<<endl;
	}
	else
	{
		cout<<"the no is not palindrone"<<endl;
	}
	return 0;
}
