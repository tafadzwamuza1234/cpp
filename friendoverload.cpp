#include<iostream>
using namespace std;

class complex
{
	float real;
	float imag;
	public:
		complex(float r=0.0,float i=0.0)
		{
			real=r;
			imag=i;
		}
		friend complex operator +(complex c1,complex c2);
		
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
		complex operator +(complex c1,complex c2)
		{
			complex temp;
			temp.real=c1.real+c2.real;
			temp.imag=c1.imag+c2.imag;
			return temp;
}
		
		int main()
		{
			complex a(2.3,4.45);
			complex b(3.4,5.34);
			complex c=a+b;
			
			a.display();
			b.display();
			c.display();
			return 0;
		}
