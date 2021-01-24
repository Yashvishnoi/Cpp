#include<iostream>
using namespace std;

class base
{
  static int a;
  int b;
  public:
  base(int x, int y)
  {
    a=x;
    b=y;
  }
  
  void show();

};

int base::a=0;//define a

void base::show()
{
  cout<<"static data variable a "<< a<<endl;
  cout<<"Non static data variable b "<<b<<endl;
}

int main()
{
  base x(1,1);
  // set a to 1
  x.show();
  base y(2,2);
  // set a to 2
  y.show();
  x.show();
  // Here a has been changed for x and y because a is shared by both objects
return 0;
}
