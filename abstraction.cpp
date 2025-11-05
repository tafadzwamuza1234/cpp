#include<iostream>
using namespace std;

class AbstractEmployee{
  virtual void AskForPromotion()=0;

};
class Emmployee: public  AbstractEmployee
{
  private:
  string Name ;
  string Company ;
  int Age ;

  public:
  Emmployee(string name , string company , int age )
  {
    Name = name ;
    Company = company ;
    Age = age ;
  }

  void AskForPromotion()
  {
    if(Age > 30 )
    {
      cout<<Name << "  get promoted "<<endl;
    }
    else{
      cout<< Name << "sorry!!! No promotion for you! " <<endl;
    }
  }
};
int main()
{
  Emmployee employee1 = Emmployee ( "takunda" , " codechef" , 34);
  Emmployee employee2 = Emmployee( " jacha ", "mvn" ,12);

  employee1.AskForPromotion();
  employee2.AskForPromotion();
  
  return 0;
}
/*
#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0; // pure virtual
};

class Employee : public AbstractEmployee { // public inheritance
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
        : Name(name), Company(company), Age(age) {} // initialization list

    void AskForPromotion() override {
        if (Age > 30)
            cout << Name << " gets promoted!" << endl;
        else
            cout << Name << " sorry!!! No promotion for you!" << endl;
    }
};

int main() {
    Employee employee1("takunda", "codechef", 34);
    Employee employee2("jacha", "mvn", 12);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
*/