#include <iostream>
using namespace std;
class student{
  public:
  int rollno;
  int age;
  string name;
  student(int r,int ag,string na)
  {
    rollno = r;
    age=ag;
    name = na;
  }
  void show()
  {
    cout<<"the roll number is :"<<rollno<<endl;
    cout<<"the age is :"<<age<<"\n";
    cout<<"the name is :"<<name<<endl;
  }
};
int main()
{
  
  student s1(488,21,"prosperity");
  s1.show();
  return 0;
}