#include<iostream>
using namespace std;

class Counter
{
	int count;
	public:
		Counter(int c=0)
		{
			count=c;
		}
		Counter operator ++()
		{
			++count;
		}
		void display()
		{
			cout<<"the value of cout ="<<count<<endl;
		}
};
int main()
{
	Counter ob1(4);
	++ob1;
	ob1.display();
	return 0;
}
