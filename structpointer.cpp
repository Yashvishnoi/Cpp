#include<iostream>
using namespace std;
struct point
{
  int x,y;
};
int main()
{
  struct point p1={10,20};
  struct point *p2=&p1;
  cout<<p2->x<<"\t"<<p2->y<<endl;
  return 0;
}
