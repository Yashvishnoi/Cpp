#include<iostream>
using namespace std;
void swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
}
int main()
{
int x=10,y=30;
swap(x,y);
cout<<x<<" "<<y;
return 0;
}
