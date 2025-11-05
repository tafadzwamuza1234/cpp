#include<iostream>
using namespace std;
void fib(int a);
int main()
{
  int n;
  cout<<"Enter number of terms you want in fibbonacci series :";
  cin>>n;
  fib(n);
  return 0;

}
void fib(int a)
{
  int x=0;
  int y = 1;
  int next_term;
  for( int i = 1; i <= a ; i++)
  {
    cout<< x <<" ";
    next_term = x + y;
    x = y;
    y = next_term;
  }
}