#include<iostream>
using namespace std;
class student 
{
	public:
		int rollno;
		student()
		{
			rollno=101;
		}
		student(int r)
		{
			rollno=r;
		}
		void show()
		{
			cout<<"the rollno is:"<<rollno<<endl;
		}
};
int main()
{
	student s1,s2(100);
	s1.show();
	s2.show();
	return 0;
	
}
