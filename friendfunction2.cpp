#include<iostream>
using namespace std;
class Demo
{
	private: int x;
	int y;
	void display()
	{
		x=10;
		y=5;
	}
	friend void div(Demo b);
	
};
void div(Demo c)
{
	c.x=10;
	c.y=5;
	cout<<"the qoutient :"<<c.x/c.y<<endl;
}
int main()
{
	Demo c;
	div(c);
	return 0;
}
