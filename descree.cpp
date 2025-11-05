     
#include<iostream>
#include<cmath>
using namespace std;
void descre(int b,int c,int a)
{
	int z,d;
     z= (b*b)-4*a*c;
     if(z<0)
     {
     	cout<<"no real roots"<<endl;
     	d=(-b-sqrt(z))/(2*a);
     	cout<<d<<endl;
	 }
	 else if(z>0)
	 {
	 	cout<<"real and different"<<endl;
	 		d=(-b+sqrt(z))/(2*a);
     	     cout<<d<<endl;
	 }
	 else
	 {
	 	cout<<"equal roots"<<endl;
	 		d=(-b+sqrt(z))/(2*a);
         	cout<<d<<endl;
	 }
     
}
int main()
{
	int a,b,c;
	cout<<"enter the values of a,b,c"<<endl;
	cin>>a>>b>>c;
	descre(a,b,c);
	return 0;
}
