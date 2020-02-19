#include<iostream>
using namespace std;

class demo
{
public:
demo()
{
cout<<"Constructor is created of Demo"<<endl;
}
~demo()
{
cout<<"destructor of demo"<<endl;
}
};
void fun()
{
//demo d;
demo *p=new demo();// if you allocate memory dynamically then only constructor is called destructor is not called
}
int main()
{
fun();
return 0;
}
