#include<iostream>
using namespace std;
 class complex 
 {
  float real;
  float imag;
  public:
  	complex (float r=0.0,float i=0.0)
  	{
  		real=r;
  		imag=i;
	  }
	  complex operator +(const complex &c)
	  {
	  	complex temp;
	  	temp.real=real+c.real;
	  	temp.imag= imag+c.imag;
	  	return 0;
	  }
	  void display()
	  {
	  	cout<<real<<"+"<<imag<<"i"<<endl;
	  }
  	
 };
 int main()
 {
 	complex c1(2.3,2.4);
 	complex c2(3.5,2.1);
 	complex c3(4.3,4.5);
 	
 	c1.display();
 	c2.display();
 	c3.display();
 	return 0;
 }
