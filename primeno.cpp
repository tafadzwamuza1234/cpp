#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int count=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"the no is not prime"<<endl;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
			count++;
		}
	}
   }
	if(count==2)
	{
		cout<<"the no is prime"<<endl;
	}
	else
	{
		cout<<"the no is not prime"<<endl;
	}
	return 0;	
}
