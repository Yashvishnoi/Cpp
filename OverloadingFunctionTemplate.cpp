#include<iostream>
using namespace std;

template<class T> 
void fun(T a)
{
	cout<<"When function fun(&a) is called  "<<a;
}

template<class X, class Y> 
void fun(X x, Y y)
{
	cout<<"\n"<<"When function fun(X &x, Y &y) is called "<<x<<" and "<<y<<"\n";
}
int main()
{

	fun(10);
	fun(10,20.5f);

return 0;
}
