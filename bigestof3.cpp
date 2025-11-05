#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"enter the values of a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<"a is the biggest"<<endl;
	}
	else if(b>c)
	{
		cout<<"b is the biggest"<<endl;
	}
	else
	{
		cout<<"c is the biggest"<<endl;
	}
	return 0;
}
