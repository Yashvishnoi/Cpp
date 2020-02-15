#include<iostream>
using namespace std;
int div(int a,int b)
{
if(b==0)
throw 1;
return a/b;
}
int main()
{
int x,y,z;
cout<<"Enter the values of x,y"<<endl;
cin>>x>>y;
try
{
if(y==0)
throw 1;
z=div(x,y);
cout<<z<<endl;
}
catch(int e)
{
cout<<"Divison by zero \t"<<"error 101\t"<<e<<endl;
}
cout<<"Bye"<<endl;
return 0;
}
