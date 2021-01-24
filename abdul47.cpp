//Inline function 
#include<iostream>
using namespace std;
class test
{
public:
void fun1()
{
cout<<"Inline function"<<endl;
}
inline void fun2();
};
void test::fun2()
{
cout<<"non inline"<<endl;
}

int main()
{
test t;
t.fun1();
t.fun2();
return 0;
}
