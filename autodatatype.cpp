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
  auto x=2*d+i;
  //auto x=fun();
  cout<<x<<endl;
return 0;
}
