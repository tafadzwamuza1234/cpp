#include<iostream>
using namespace std;

class Demo
{
	int n;
	public:
		Demo(int x)
		{
			n=x;
		}
		Demo operator -()
		{
			return Demo(-n);
		}
		void display ()
		{
			cout<<"value of n" <<n<<endl;
		}
};
int main()
{
	Demo ob1(50);
	Demo ob2 =-ob1;
	
     cout<<"the original object:";
     ob1.display();
     
     cout<<"after operator overloading:";
     ob2.display();
     return 0;
}
