#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		student(int r)
		{
			rollno=r;
		}
		student (const student &s)
		{
			
			rollno=s.rollno;
		}
		void display()
		{
			cout<<"the rollno is:"<<rollno<<endl;
		}
};
int main ()
{
	student s1(100);
	s1.display();
	student s2=s1;
	s2.display();
	return 0;
}
