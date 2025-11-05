#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<"integer sum"<<add<int>(4,5)<<endl;
	cout<<"float sum"<<add<float>(8.1,5.6)<<endl;
	cout<<"double sum"<<add<double>(2.23f,5.52f)<<endl;
	
	return 0;
}
