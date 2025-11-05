#include<iostream>
using namespace std;

class Student{
  public:
  int age;
  int marks;
  string name;
  Student(int a=13, int m=45,string na="chipimo")
  {
    age=a;
    marks = m;
    name = na;
  }
  void display()
  {
    cout<<"AGE :"<<age<<" "<<"MARKS :"<<marks<<" NAME :"<<name<<endl;
  }
};
int main()
{
  Student s1;
  Student s2(45,67);
  Student s3(89,100,"takunda");
  s1.display();
  s2.display();
  s3.display();

  return 0;


}