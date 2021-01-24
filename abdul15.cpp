#include<iostream>
using namespace std;
int maximum(int x,int y,int z)
{
if(x>y&&x>z)
return x;
else if(y>z)
return y;
return z;
}
int main()
{
int x,y,z,r;
cout<<"enter the three numbers";
cin>>x>>y>>z;
r=maximum(x,y,z);
cout<<"greater number is "<<r;
return 0;
}
