#include<iostream>
using namespace std;
int main()
{
int x=10;
const int * const ptr=&x;
int y=20;
cout<<*ptr<<" "<<x<<endl;
return 0;
}
