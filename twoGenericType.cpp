#include<iostream>
using namespace std;
template<class X, class Y>
void fun(X x, Y y)
{
cout<<x<<"\n"<<y;
} 

int main()
{
fun(10,"I Love you");
return 0;
}
