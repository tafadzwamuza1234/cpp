#include<iostream>
using namespace std;
class Student
{
	int marks;
	public:void setmarks(int m)
	{
		marks = m;
	}
	void showmarks()
	{
		cout<<"marks:"<<marks<<endl;
	}
	void addbonus(Student &s)
	{
		s.marks += 5;
		cout<<s.marks;
	}
};
int main()
{
	Student s1,s2;
	s1.setmarks(90);
	s2.setmarks(85);
	
	s2.addbonus(s2);
	s2.showmarks();
	s1.showmarks();
	
	return 0;
}
