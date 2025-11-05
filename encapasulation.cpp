#include<iostream>
using namespace  std;
class  Employee
{
private:
  string Name;
  string Company;
  int Age;
public:
   Employee(string name ,string company, int age)
   {
    Name = name;
    Company = company;
    Age = age;
   }
   void inttroduce_employee()
   {
    cout<<" NAME : "<<Name<<endl;
    cout<<"Company name is : "<<Company<<endl;
    cout<<"The age of "<<Name<<" is :"<<Age<<endl; 
   }

};
int main()
{
  Employee employee1 = Employee("takunda", " leetcode" , 21);
  employee1.inttroduce_employee();
}

