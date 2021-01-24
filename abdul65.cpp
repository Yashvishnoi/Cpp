#include<iostream>
using namespace std;

class shape//abstract class
{
public:
virtual float area()=0;//pure virtual function
virtual float perimeter()=0; // must be overwritten by derived class 
};

class rectangle:public shape//derived class
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

class circle:public shape//derived class
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
int q,u,w;
cout<<"Enter the value of length and breadth"<<endl;
cin>>q>>u;
shape *p=new rectangle(q,u);//base class pointer pointing to a derived class object
cout<<"area of rectangle is "<<p->area()<<endl;
cout<<"perimeter of circle is "<<p->perimeter()<<endl;
cout<<"enter the value of radius"<<endl;
cin>>w;
p=new circle(w);
cout<<"area of circle is"<<p->area()<<endl;
cout<<"perimeter of circle is "<<p->perimeter()<<endl;
return 0;
}
