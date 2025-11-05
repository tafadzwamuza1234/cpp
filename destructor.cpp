#include<iostream>
using namespace std;
int count=0;
class test
{
	public:
		test()
		{
			count=count+1;
			cout<<"the constructor called for object "<<count<<endl;
		}
		~test()
		{
			cout<<"the dstructor is called for object "<<count<<endl;
			count=count-1;
		}
};
int main()
{
	test t1,t2,t3,t4;
	return 0;
}
