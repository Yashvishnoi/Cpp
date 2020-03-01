#include<iostream>
using namespace std;
class base
{
  int x;
  public:
  base(int j) 
  {
    x=j;
  }
  int getvalue()  
  {
    return x;
  }
};

int main()
{
  base obj[3]={20,30,40};
  int i;

  for( i=0;i<3;i++)
  {
    cout<<obj[i].getvalue()<<endl;  
  }
return 0;
}
