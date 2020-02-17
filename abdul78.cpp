#include<iostream>
using namespace std;
int main()
{
const int x=10;
const int *ptr=&x;
//++*ptr;//we cannot modify this value 
cout<<*ptr<<endl;
return 0;
}
