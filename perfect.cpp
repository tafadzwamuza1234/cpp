#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"the number is not perfect"<<endl;
		return 0;
	}
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum +=i;
		}
	}
	if(sum==n)
	{
		cout<<"the number is perfect"<<endl;
	}
	else
	{
		cout<<"the number is not perfeft"<<endl;
	}
	return 0;
}
