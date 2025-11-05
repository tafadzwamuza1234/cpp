#include<iostream>
using namespace std; 
   inline int add(int a,int b)
   {
   	return a+b;
   }
int main()
{
	int sum;
	int a=10,b=29;
	sum=add(a,b);
	cout<<sum;
}
