#include<iostream>
using namespace std;
class Complex
{
  float real;
  float imag;
  public:
  Complex(float r =0.8 ,float i =0.7)
  {
    real = r;
    imag = i;

  }
  friend Complex operator+(Complex c1,Complex c2);
  void display()
  {
    cout<< real << " + "<< imag <<"i" <<endl;
  }
};
Complex operator+(Complex c1,Complex c2)
{
  Complex temp;
  temp.real = c1.real + c2.real;
  temp.imag = c1.imag + c2.imag;
  return temp;
}
int main()
{
  Complex c1 =Complex(5.7,9.0);
  Complex c2 = Complex (2.5 ,6.7);
  Complex c3 = c2 + c1;
  
  cout<<"First Complex Number : ";
  c1.display();
  
  cout<< "Second complex number : ";
  c2.display();
  cout<< " Sum of :";
  c3.display();

  return 0;
}
