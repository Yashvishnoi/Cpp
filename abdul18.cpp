#include<iostream>
using namespace std;
int add(int x,int y,int z=0)
{
return x+y+z;
}
int main()
{
int c=add(2,5);
cout<<"sum is "<<c<<endl;
c=add(2,5,8);
cout<<"sum is "<<c<<endl;
c=add(2,5,5);
cout<<"sum is "<<c;
return 0;
}
