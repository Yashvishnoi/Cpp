#include<iostream>
using namespace std;
struct point
{
  int x,y;
};
int main()
{
  struct point ar[10];
  ar[0].x=10;
  ar[0].y=20;
  cout<<ar[0].x<<"\t"<<ar[0].y<<endl;
  return 0;
}
