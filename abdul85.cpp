#include<iostream>
using namespace std;

namespace First
{
void fun()
{
cout<<"First function is called "<<endl;
}
};

namespace Second
{
void fun()
{
cout<<"Second function is called"<<endl;
}
}
int main()
{
First::fun();
Second::fun();
return 0;
}
