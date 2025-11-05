#include<iostream>
using namespace std;
class animal
{
	public:
		virtual void makesound()
		{
			cout<<"sound not yet decided"<<endl;
		}
};
class dog:public animal
{ 
     public:
	void makesound()
	{
		cout<<"the sound of bark"<<endl;
	}
};
	class cat:public animal
	{
		public:
			void makesound()
			{
				cout<<"the sound of meow"<<endl;
			}
	
};
int main()
{
	animal A;
	dog d;
	cat c;
	animal *ptr=&A;
	ptr->makesound();
	ptr=&d;
	ptr->makesound();
	ptr=&c;
	ptr->makesound();
	return 0;
}
