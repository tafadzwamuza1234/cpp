#include<iostream>
using namespace std;
class vehicle{
  public:
   void tr(){
    cout<<"there are many tyoes of vehicles. choose yours"<<endl;
   }
};
class cars{
public:
  void ty(){
    cout<<"in stock we have BMW, TOYOTA  & MAZDA"<<endl ;
    }
};
class choice: public vehicle, public cars {
  public:
  void cho(){
    cout<<"these are not the only choices available in other branches"<<endl;

  }
};
int main(){
  vehicle v;
  cars c;
  choice ch;
  ch.tr();
  ch.ty();
  ch.cho();
  return 0;
}

