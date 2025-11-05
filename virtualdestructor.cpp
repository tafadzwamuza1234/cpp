#include<iostream >
using namespace std;

class Base
{
	public:
	    Base()
	    {
	    	cout<<"this is the"<<endl;
		}
		virtual ~Base()
		{
			cout<<"this is the destructor"<<endl;
		}
};
class derived:public Base
{
	public:
		derived()
		{
			cout<<"the derived con"<<endl;
		}
		~derived()
		{
			cout<<"this is the derived de"<<endl; 
		}
};
int main()
{
	Base *obj=new derived();
	delete obj;
	return 0;
}
