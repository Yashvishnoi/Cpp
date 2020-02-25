#include<iostream>
using namespace std;

class number
{
protected:
int val;
public:
void setval(int i){val=i;}
virtual int getval()=0;

};

class dectype:public number
{
public:
int getval()
{
cout<<"dectype "<<val<<endl;
}
};

class hextype:public number
{
public:
int getval()
{
cout<<"hextype "<<val<<endl;
}
};

class octtype:public number
{
public:
int getval()
{
cout<<"Octval "<<val<<endl;
}
};

int main()
{

dectype d;
octtype o;
hextype h;
d.setval(10);
d.getval();

o.setval(10);
o.getval();

h.setval(10);
h.getval();

return 0;
}
