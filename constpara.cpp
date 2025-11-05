#include<iostream>
using namespace std;
class student{
  public:
  int mark1;
  int mark2;
  student(int m1,int m2)
  {
     mark1=m1;
     mark2=m2;
  }
  void add()
  {
    cout<<"the total = "<<mark1+mark2;
  }
};
int main()
{
  student s1(10,19);
  s1.add();
  return 0;
}