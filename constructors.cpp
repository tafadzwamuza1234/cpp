#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		student()
		{
			rollno=10;
		}
		void show()
		{
			cout<<"rollno"<<rollno;
		}
};
int main()
{
	student s1,s2,s3;
	s1.show();
	s2.show();
	s3.show();
	return 0;
}
