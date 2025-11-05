#include<iostream>
using namespace std;
class values{
  public:
  int num1,num2;
  int sum;
  values(int n1,int n2 )
  {
    num1=n1;
    num2 = n2;
  }
  void show()
  {
     sum = num1 + num2 ;
     cout<<"the sum is "<< num1 + num2;
  }
};
int main()
{
  int a,b;
  cout<<"enter values of a and b"<<endl;
  cin>>a>>b;
  values v1(90,6);
  v1.show();
  return 0;
}