#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int init,i=0,arm=0,num;
	cout<<"enter the value of num"<<endl;
	cin>>num;
	
	init=num;
	while(num)
	{
		num/=10;
		i++;
	}
	num=init;
	while(num)
	{
		arm+=pow(num%10,i);
		num/=10;
	}
	if(arm==init)
	{
		cout<<"armstrong"<<endl;
	}
	else
	{
		cout<<"not armstrong"<<endl;
	}
	return 0;
}
