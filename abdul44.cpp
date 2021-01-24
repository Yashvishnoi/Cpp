#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int breadth;
public:
void setLength(int l)
{
if(l>0)
length=l;
else
length=0;
}
void setBreadth(int b)
{
if(b>0)
breadth=b;
else 
breadth=0;
}
int getLength()
{
return length;
}
int getBreadth()
{
return breadth;
}
int area()
{
return length*breadth;
}
int perimeter()
{
return 2*(length+breadth);
}
};
int main()
{
rectangle r;
int a,b;//a=length and b=breadth
cout<<"Enter the length and breadth";
cin>>a>>b;
r.setLength(a);
r.setBreadth(b);
cout<<"Length is"<<r.getLength()<<endl;
cout<<"Breadth is"<<r.getBreadth()<<endl;
cout<<"Area is"<<r.area();
cout<<"Perimeter is"<<r.perimeter();
return 0;
}
















