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

void f(base &r)
{
r.fun();
}

int main()
{
base b;
derived d1;
derived2 d2;

f(b);
f(d1);
f(d2);

return 0;
}
