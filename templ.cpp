#include<iostream>
using namespace std;
template <typename T1, typename T2>
class Adder
{
	private:
		T1 a;
		T2 b;
		public:
			Adder(T1 x, T2 y)
			{
				a=x;
				b=y;
			}
			auto add()
			{
				return a+b;
			}
};
int main()
{
	Adder<int , int> ob1(3,4);
	cout<<"the addition"<<ob1.add();
	return 0;
}
