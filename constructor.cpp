#include<iostream>
using namespace std;
class  student
{
public:
   int rollno;
   student()
   {
    rollno=10;
    
   }
   void show()
   {
    cout<<"roll number is :"<<rollno;
   }
};
int main()
{
  student s1;
  s1.show();
  return 0;
}