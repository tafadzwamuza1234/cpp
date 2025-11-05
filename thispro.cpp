#include<iostream>
using namespace std;
class add1
{
	public:
		int a;
		add1(int a)
		{
			this->a=a;
		}
		void display()
		{
			cout<<"the value of a is: "<<a;
		}
};
int main ()
{
	add1 a(10);
	a.display();
	return 0;
}
