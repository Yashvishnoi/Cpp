#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"Enter the values of x,y,z"<<endl;
cin>>x>>y>>z;
try
{
if(y==0)
throw 1;
z=x/y;
cout<<x<<endl;
}
catch(int e)
{
cout<<"Divison by zero \t"<<e<<endl;
}
cout<<"Bye"<<endl;
return 0;
}
