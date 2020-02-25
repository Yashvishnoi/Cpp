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
//Use a base class reference parameter
void f(base &r)
{
r.fun();
}

int main()
{
base b;// pass a base class object to f()
derived d1;// pass a derived class object to f()
derived2 d2;// pass a derived2 class object f()

f(b);
f(d1);
f(d2);

return 0;
}
