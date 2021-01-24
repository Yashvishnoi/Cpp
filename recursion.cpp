#include<iostream>
using namespace std;
int fun(int x)
{
  int f;
  if(x==1)
  return 1;
  else
  f=x*fun(x-1);// function calling itself its a recurive function
  return f;
}
int main()
{
  int a,b,c;
  cout<<"Enter the number whoes factorial to be found "<<endl;
  cin>>b;
  a=fun(b);
  cout<<"Factorial of number is "<<a<<endl;
return 0;
}
