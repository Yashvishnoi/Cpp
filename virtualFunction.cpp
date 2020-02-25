// Pure virtual function
#include<iostream>
using namespace std;

class number
{
  protected:
  int val;
  public:
  void setval(int i){val=i;}
  virtual int getval()=0;// getval() is a pure virtual function

};

class dectype:public number
{
  public:
  int getval()
  {
    cout<<"dectype "<<val<<endl;
  }
};

class hextype:public number
{
  public:
  int getval()
  {
    cout<<"hextype "<<val<<endl;
  }
};

class octtype:public number
{
  public:
  int getval()
  {
    cout<<"Octval "<<val<<endl;
  }
};

int main()
{

  dectype d;
  octtype o;
  hextype h;
  d.setval(10);// displays 10-hexdecimal
  d.getval();

  o.setval(10);//display 10 octadecimal
  o.getval();

  h.setval(10);// displays 10 hexadecimal
  h.getval();

return 0;
}
