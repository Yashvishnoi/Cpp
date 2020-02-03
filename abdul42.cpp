#include<iostream>
using namespace std;
class rectangle
{
public:
int length;
int breadth;
int area()
{
//int v=length*breadth;
return length*breadth;
}
int perimeter()
{
//int u=2*(length+breadth);
return 2*(length+breadth);
}
};
int main()
{
rectangle r1,r2;
r1.length=10;
r1.breadth=5;
cout<<r1.area();
r2.length=15;
r2.breadth=10;
cout<<r2.area();
return 0;
}
