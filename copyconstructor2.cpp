#include<iostream>
using namespace std;
class student
{
	public:
		int age;
		string name;
		student(int a,string c)
		{
			age=a;
			name=c;
		}
		student (const student &s)
		{
			age=s.age;
			name=s.name;
		}
		void show()
		{
			cout<<"the age is:"<<age<<"\n"<<"the name is:"<<name<<endl;
		}
};
int main()
{
	student s1(19,"tafadzwa");
	s1.show();
	student s2=s1;
	s2.show();
}

