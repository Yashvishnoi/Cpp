//........Day2 #100DaysofCode ..........4\02\2020
#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int breadth;
public:
/*rectangle()//Non parametirized constructors ! Default constructor
{
length=1;
breadth=1;
}*/
rectangle(int l=1,int b=1)//Parametirized constructors 
{
setLength(l);
setBreadth(b);
}
rectangle(rectangle &r)//copy constructors
{
length=r.length;
breadth=r.breadth;
}
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
int a,b;
cin>>a>>b;//a=length&&b=breadth
rectangle r1(a,b);//first object
rectangle r2(r1);//2nd object
cout<<r2.area()<<endl;
return 0;
}



