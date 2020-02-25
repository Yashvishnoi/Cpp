#include<iostream>
using namespace std;
int main()
{
  
  [](){cout<<"Hello"<<endl;}();
  
  [](int x,int y){cout<<"Sum of two number is "<<x+y<<endl;}(10,12);
  
  cout<<([](int x,int y){return x+y;}(10,12));
  
  int a=[](int x,int y){return x+y;}(10,12);
 
  cout<<a;
}
