#include<iostream>
using namespace std;
int main()
{
  int *p,**q,x;
  x=10;
  p=&x;// contain the address of x
  q=&p;// contain the address of p
  cout<<"Value of x"<<x<<endl;
  cout<<"Value we get by using pointer p "<<*p<<endl;
  cout<<"Value we get by using pointer q"<<**q<<endl;
return 0;
}
