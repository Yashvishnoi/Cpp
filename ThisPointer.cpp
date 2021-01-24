#include<iostream>
using namespace std;
class pow
{
  int a;
  int e;
  int val;
  public:
  pow(int x,int y);
  int getvalue();
};

pow::pow(int x,int y)
{
  this->a=x;
  this->e=y;
}

int pow::getvalue()
{
  int i;
  val=1;
  if(e==0)
  return 1;
  else
  {
    for(i=e;i>0;i--)
    this->val=val*a;
  }
  return this->val;
}

int main()
{
  pow p1(2,2) ,p2(2,3);
  cout<<p1.getvalue()<<" "<<p2.getvalue()<<" "<<endl;
return 0;
}
