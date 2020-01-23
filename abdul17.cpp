#include<iostream>
using namespace std;
template <class T>
int Tmax(T x,T y)
{
if(x>y)
return x;
else 
return y;
}
main()
{
int c=max(10,8);
cout<<c<<endl;
float d=max(20.1f,65.1f);
cout<<d<<endl;
return 0;
}
