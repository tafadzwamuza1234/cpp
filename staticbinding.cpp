//static binding -compile time polymorphism
#include<iostream>
using namespace std;
class parent
{
	public:
		void show()
		{
			cout<<"\ninside parent class -show() function";
		}
};
class child :public parent
{
	public:
		void show()
		{
			cout<<"\ninside child class -show() function";
		}
};
int main()
{
	parent p;
	p.show();//it will call base class show()
	
	child c;
	c.show();
	
	parent *ptr=&c;
	ptr->show();
	return 0;
}
