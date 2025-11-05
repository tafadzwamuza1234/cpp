#include<iostream>
using namespace  std;
class Student
{
	int rollno;
	string name;
	public:
		void getdata()
		{
			cout<<"Enter the rollno and the name"<<endl;
			cin>>rollno>>name;
		}
		void display()
		{
			cout<<"rollno"<<rollno<<"name"<<name<<endl;
		}
		
};
int main()
{
	int i;
	Student s[3];
	for(i=0;i<3;i++)
	{
		s[i].getdata();
	}
	cout<<"the student details"<<endl;
	for(i=0;i<3;i++)
	{
		s[i].display();
	}
	return 0;
}
