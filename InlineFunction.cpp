#include<iostream>
using namespace std;
class base
{
  private:
  int a,b;
  public:
  void init(int i,int j);
  void display();
};

void base::init(int i,int j)
{
  a=i;
  b=j;
}

void base::display()
{
  cout<<a<<" "<<b<<endl; 
}

int main()
{
  base x;
  x.init(10,20);
  x.display();
return 0;
}
