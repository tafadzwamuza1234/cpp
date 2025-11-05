#include<iostream>
using namespace std;

inline int func(int a)
{
	cout<<"the value is "<<a<<endl;
}
int main()
{
	func(10);
	func(8);
	func(20);
	func(0);
	return 0;
}

