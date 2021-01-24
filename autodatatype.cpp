#include<iostream>
using namespace std;
float fun()
{
  return  2.5f;
}
int main()
{
  double d=12.3;
  int i=9;
  auto x=2*d+i;// here d is double type and i is int type when you add you will be confuse weather it is int or double then use auto keyword
  //auto x=fun();
  cout<<x<<endl;
return 0;
}
