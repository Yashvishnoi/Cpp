#include<iostream>
#include<math.h>
using namespace std;

class shape
{
public:
int area=314;
int rectangle()
{
int l,b,PeriRec,a;
l=2;
b=(area/l);
PeriRec=2*(l+b);
return PeriRec;
}

float triangle()
{
float PeriTri;
int h,b,a;
h=4;
b=(area*2)/h;
PeriTri=b+h+sqrt(b*b+h*h);
return PeriTri;
}

int square()
{
int a;
float PeriSquare;
a=sqrt(area);
PeriSquare=4*a;
return PeriSquare;
}

float circle()
{
float PeriCircle,r;
r=sqrt(area/3.14);
PeriCircle=3.14*2*r;
return PeriCircle;
}

};

int main()
{
int a,w,z;
float q;
shape b;
a=b.rectangle();
cout<<a<<endl;
q=b.triangle();
cout<<q<<endl;
w=b.square();
cout<<w<<endl;
z=b.circle();
cout<<z<<endl;
float s[4]={a,q,w,z};
for(int i=0;i<4;i++)
{

}
return 0;
}
