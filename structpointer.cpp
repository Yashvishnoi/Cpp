#include<iostream>
using namespace std;
struct point
{
  int x,y;
};
int main()
{
  struct point p1={10,20};
  struct point *p2=&p1;// p2 is pointer to structure p1
  cout<<p2->x<<"\t"<<p2->y<<endl;//Accessing structure member using structure pointer
  return 0;
}
