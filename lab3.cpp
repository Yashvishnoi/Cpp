#include<iostream>
using namespace std;

class area
{
float x1,x2;
public:
area(float x,float y)
{
x1=x;
x2=y;
}

void choice(int q)
{
//int a;
//a=q;
switch(q)
{
case 1: calculate((int)x1);

break;

case 2: calculate((int)x1,(int)x2);

break;

case 3: calculate(x1,x2);

break;

default:
cout<<"Wrong choice";
}
}

float calculate(int x1)
{
cout<<"Area of square "<<endl;
int x=x1*x1;
cout<<x;
}
 
float calculate(int x1,int x2)
{
cout<<"Area of Rectangle "<<endl;
int x=x1*x2;
cout<<x;
}

float calculate(float x1,float x2)
{
cout<<"Area of Triangle "<<endl;
float x=0.5*x1*x2;
cout<<x;
}

};

int main()
{
area a(10.2f,2.2f);
a.choice(3);
return 0;
}
