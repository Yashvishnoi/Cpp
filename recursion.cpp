#include<iostream>
using namespace std;
int fun(int x)
{
int f;
if(x==1)
return 1;
else
f=x*fun(x-1);
return f;
}
int main()
{
int a,b,c;
cin>>b;
a=fun(b);
cout<<"Factorial of number is "<<a<<endl;
return 0;
}
