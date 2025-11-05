#include<iostream>
using namespace std;
int factorial(int);
int main()
{
  int number ;
  cout << " enter number "<<endl;
  cin >> number ;
  int result = factorial (number);
   cout<<"the factorial of "<< number << " is " << result;

  return 0;
}
int factorial (int n)
{
  if(n==0||n==1)
  {
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}