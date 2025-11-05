#include<iostream>
using namespace std;
class Demo
{
	private: int x,y;
		void display()
		{
			x=10;
			y=20;
			cout<<"i am inside disp() member function of the class";
		}
		friend void add(Demo d);
};
void add(Demo ob)
{
	ob.x=10;
	ob.y=20;
	cout<<"sum = "<<ob.x + ob.y<<endl;
}
int main()
{
	Demo ob;
	add(ob);
	return 0;
}
