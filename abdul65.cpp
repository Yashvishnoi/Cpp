#include<iostream>
using namespace std;

class shape
{
public:
virtual float area()=0;
virtual float perimeter()=0;  
};

class rectangle:public shape
{
private:
int length;
int breadth;
public:

rectangle(int l,int b)
{
if(l==0)
length=1;
else
length=l;
if(b==0)
breadth=1;
else 
breadth=b;
}
float area()
{
return length*breadth;
}
float perimeter()
{
return 2*(length+breadth);
}
};

class circle:public shape
{
private:
float radius;
public:
circle(float r)
{
if(r==0)
radius=1;
else
radius=r;
}
float area()
{
return 3.14*radius*radius;
}
float perimeter()
{
return 2*3.14*radius;
}
};

int main()
{
shape *p=new rectangle(10,5);
cout<<"area of rectangle is "<<p->area()<<endl;
cout<<"perimeter of circle is "<<p->perimeter()<<endl;
p=new circle(10);
cout<<"area of circle is"<<p->area()<<endl;
cout<<"perimeter of circle is "<<p->perimeter()<<endl;
return 0;
}
