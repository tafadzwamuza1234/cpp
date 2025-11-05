#include<iostream>
using namespace std;
class student 
{
	public:
		int rollno;
		string name;
		student(int r,string n)
		{
			
          rollno=r;			
          name=n;
		}
		void show()
		{
			cout<<"rollno:"<<rollno<<"\n"<<name;
		}
};
int main()
{
	student s1(101,"tafadzwa");
	s1.show();
	return 0;
}
