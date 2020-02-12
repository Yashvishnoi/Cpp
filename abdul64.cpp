#include<iostream>
using namespace std;
class base//use of this class is (i)-reusability (ii)-overwriting helps achiving polymorphism
{
public:
void fun1()//concrete function 
{
cout<<"fun1 from base"<<endl;
}
virtual void fun2()=0;//pure virtual function

};
class derived:public base
{
public:
void fun2()
{
cout<<"fun2 of derived class"<<endl;
}
};
int main()
{
derived d;
d.fun1();
d.fun2();
return 0;
}
