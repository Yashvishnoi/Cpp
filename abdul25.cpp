#include<iostream>
using namespace std;
int g=0;
void fun()
{
int a=5;
g=g+a;
cout<<g;
}
int main()
{
g=15;
fun();
g++;
cout<<g;
return 0;
}

