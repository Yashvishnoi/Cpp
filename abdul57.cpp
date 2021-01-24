#include<iostream>
using namespace std;
class base
{
public:
void fun1()
{
cout<<"fun1 of base";
}
};

class derived:public base
{
public:
void fun2()
{
cout<<"fun2 of derived";
}
};

int main()
{
derived d;
base *ptr=&d;
ptr->fun1();
//ptr->fun2();
return 0;
}
