#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"the number is not perfect"<<endl;
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"the number is prime"<<endl;
	}
	else
	{
		cout<<"the number is not prime"<<endl;
	}
	return 0;
}
