#include<iostream>
using namespace std;
class student{
  public:
  int mark1 , mark2 ,mark3 ;
  int sum ;
  student(int m1 ,int m2)
  {
    mark1 = m1 ;
    mark2 = m2;
    sum = m1 + m2;
  }
  student()
  {
      mark1 = 45;
      mark2 = 89 ;
      mark3 = 4 ;
      sum = mark1 + mark2 + mark3 ;
  }
  void show()
  {
    cout<<"the sum of the number are :"<<sum<<endl;
  }

};
int main()
{
  student s1(9,89);
  student s2;
  s1.show();
  s2.show();

  return 0;
}