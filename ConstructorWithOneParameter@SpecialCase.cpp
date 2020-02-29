#include<iostream>
using namespace std;

class base
{
  int a;
  public:
  base(int j)
  {
    a=j;
  }
  
  int show()  
  {
  return a;
  }
};

int main()
{
  //base b(10);

  // We can also write above line like

  base b=20;
  cout<<b.show()<<endl;
return 0;
}
