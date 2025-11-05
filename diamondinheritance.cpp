#include<iostream>
using namespace std;
class A{
  public:
  void func(){
    cout<<"A"<<endl;
  }
};
class B:virtual public A{
  public:
};
class C:virtual public A{
  public:
};
class D:public C,public B{
  public:
};
int main(){
  D obj;
  obj.func();
  //obj.B::func();
  //obj.C::func();
  return 0;
}




