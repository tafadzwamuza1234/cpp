#include<iostream>
using namespace std;
class base
{
	public:
		void print()
		{
			cout<<"in base class"<<endl;
		}
};
class derived1:public base
{
	public:
		void print()
		{
			cout<<"in derived class";
		}
};
class derived2:public base
{
	public:
		void print()
		{
			cout<<"in derived2 class";
		}
};
int main()
{
	base *ptr;
	base b1;
	derived1 d1;
	derived2 d2;
	ptr=&b1;
	ptr->print();
	ptr=&d1;
	ptr->print();
	ptr=&d2;
	ptr->print();
	return 0;
}
