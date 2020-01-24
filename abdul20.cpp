#include<iostream>
using namespace std;
void swap(int a,int b)//formal parameters
{
int c;
c=a;
a=b;
b=c;
}
int main()
{
int x=10,y=30;
swap(x,y);//actual parameters
cout<<x<<" "<<y;
return 0;
}
