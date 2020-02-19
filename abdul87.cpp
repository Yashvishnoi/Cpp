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
demo d;
}
int main()
{
fun();
return 0;
}
