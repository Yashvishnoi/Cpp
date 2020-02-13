#include<iostream>
using namespace std;
class base// if class is having pure virtual function then it is called abstract class we cannot create the  object we only create the pointer
{
public:
virtual void fun1()
{
cout<<"fun 1";
}
virtual void fun2()=0;//virtual keyword is used to make the function polymorphism we didnt need  function here it is only for nameshake we dewfine the function in child class we also not need the body we need body in child class for this assign this funcTION 0 after assingning zero it is also called pure virtual function
};
class derived:public base
{
public:
void fun2()
{
cout<<"Derived fun2";
}
}
int main()
{

return 0;
}
