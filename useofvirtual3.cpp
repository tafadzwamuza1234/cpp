#include<iostream>
using namespace std;
class shape
{
	public:
		shape()=default;
		virtual double get_area()
		{
			return 0.0;
		}
		~shape()=default;
};
class square:public shape
{
	double *length;
	public:
		square(double len=1.0):length(new double(len)){}
		double get_area() override
		{
			return *length * *length;
		}
		~square()
		{
			delete length;
			cout<<"memory is deallocated"<<endl;
		}
};
int main()
{
	shape *shape=new square(1.5);
	cout<<"the area of shape1 is"<<shape->get_area()<<endl;
	square *shape2=new square(2.5);
	cout<<"the area of ahape2"<<shape2->get_area();
	return 0;
}
