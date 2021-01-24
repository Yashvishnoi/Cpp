#include<iostream>
using namespace std;
int max(int x,int y,int z=0)
{
if(x>y&&x>z)
return x;
else if(y>z)
return y;
else
return z;
}
int main()
{
int x,y,z,m;
cout<<"enter three numbers";
cin>>x>>y>>z;
m=max(x,y,z);
cout<<"greatest number is"<<m;
return 0;
}
