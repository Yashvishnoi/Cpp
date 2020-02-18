#include<iostream>
using namespace std;
int main()
{
int x=10;//constant pointer to integer constant
const int * const ptr=&x;
int y=20;
cout<<*ptr<<" "<<x<<endl;
return 0;
}
