#include<iostream >
using namespace std;

class parent 
{
	public:
		void show()
		{
			cout<<"this is the"<<endl;
		}
};
class child:public parent
{
	public:
		void show()
		{
			cout<<"this is the"<<endl;
		}
};
int main()
{
	parent d;
	d.show();
	
	child c;
	c.show();
	
	parent *ptr =&c;
	ptr->show();
	
	return 0;
	
}
