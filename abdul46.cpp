#include<iostream>
using namespace std;

class rectangle
{
private:
int length;
int breadth;
public:
rectangle();//Np constructors
rectangle(int l,int b);//p constructors
rectangle(rectangle &r);//copy constructor
int getLength(){return length;}//Accessors
int getBreadth(){return breadth;}//also become inline function
void setLength(int l);//Mutators
void setBreadth(int b);
int area();//facilitators
int perimeter();
bool isSquare();//enquirey
~rectangle();//destructors
};

int main()
{
rectangle r(10,10);
cout<<"Area"<<r.area()<<endl;
if(r.isSquare())
cout<<"Yes"<<endl;
return 0;
}



rectangle::rectangle()
{
length=1;
breadth=1;
}
rectangle::rectangle(int l,int b)
{
length=l;
breadth=b;
}

rectangle::rectangle(rectangle &r)
{
length=r.length;
breadth=r.breadth;
}
void rectangle::setLength(int l)
{
length=l;
}
void rectangle::setBreadth(int b)
{
breadth=b;
}
int rectangle::area()
{
return length*breadth;
}
int rectangle::perimeter()
{
return 2*(length+breadth);
}
bool rectangle::isSquare()
{
return length==breadth;
}
rectangle::~rectangle()
{
cout<<"REctangle Destroyed";
}
















