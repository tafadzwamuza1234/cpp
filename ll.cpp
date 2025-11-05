#include<iostream>
using namespace std;
int main ()
{
	int n,digit,reverse=0,temp;
	
	cout<<"enter the value of n"<<endl;
	cin>>n;
	temp=n;
	while(temp>0)
	{
		digit=temp%10;
		reverse=reverse*10+digit;
		temp=temp/10;
	}
	if(reverse==n)
	{
		cout<<"armstrong"<<endl;
	}
	else
	{
		cout<<"not armstrong"<<endl;
	}
	return 0;
}
