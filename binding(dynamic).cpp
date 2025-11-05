#include<iostream>
using namespace std;

class parent
{
	public:
		virtual void show()
		{
			cout<<"this is inside parent base"<<endl;
		}
};
class child:public parent
{
	public:
		void show()
		{
			cout<<"this is inside the child"<<endl;
		}
};
int main()
{
	parent p;
	p.show();
	
	child c;
	c.show();
	
	parent *ptr= new child;
	ptr->show();
	 return 0;
	
}
