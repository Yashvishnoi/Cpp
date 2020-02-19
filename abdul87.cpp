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
demo *p=new demo();
}
int main()
{
fun();
return 0;
}
