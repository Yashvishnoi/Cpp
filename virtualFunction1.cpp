#include<iostream>
using namespace std;
class base
{
public:
virtual void fun()
{
cout<<"This is base class function"<<endl;
}
};

class derived:public base
{
public:
void fun()
{
cout<<"This is derived1 class function"<<endl; 
}
};

class derived2:public base
{
public:
void fun()
{
cout<<"This is derived2 class function"<< endl;
}
};
int main()
{
base *p,b;
derived d1;
derived2 d2;
p=&b;
p->fun();// access base function

p=&d1;
p->fun();// access derived function

p=&d2;
p->fun();// access derived2 function
return 0;
}
