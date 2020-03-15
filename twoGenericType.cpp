#include<iostream>
using namespace std;
template<class X, class Y>
void fun(X x, Y y)
{
	cout<<"\n"<<x<<"\n"<<y;
} 

int main()
{

	fun(10,"I Love you");
	fun(10.014,198L);

return 0;
}
