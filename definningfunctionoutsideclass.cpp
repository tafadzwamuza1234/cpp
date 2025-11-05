#include<iostream>
using namespace std;
class Tt
{
	public:
		void add();
};
void Tt::add()
{
	int a=10,b=20,c;
	c=a+b;
	cout<<c;
}
int main()
{
	Tt ob1;
	ob1.add();
}
