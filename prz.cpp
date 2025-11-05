#include<iostream>
using namespace std;
class sum 
{
	public:
		int a,b,c,d;
		add(int x,int y)
		{
			a=x;
			b=y;
		}
		add(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		add(int x,int y,int z,int n)
		{
			a=x;
			b=y;
			c=z;
			d=n;
		}
		 void Add1()
		{
		     cout<<a+b<<endl;
		}
		void Add2()
		{
			cout<<a+b+c<<endl;
		}
		void Add3()
		{
			cout<<a+b+c+d<<endl;
		}
		
};
int main()
{
	sum a(10,20),a1(10,20,30),a2(10,20,30,40);
	a.Add1();
	a1.Add2();
	a2.Add3();
	return 0;
}
