#include<iostream>
using namespace std;
int main()
{
  int x1=10,x2=20,x3,m=2;
  bool b1,b2;
  b1=x1==x2;//false
  b2=x1<x2;//true
  bool b3=true;
  x3=false+5*m-b3;
  cout<<b1<<"\t";
  cout<<b2<<"\t";
  cout<<x3;
 return 0;
}
