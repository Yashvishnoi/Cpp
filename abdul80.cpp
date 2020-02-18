#include<iostream>
using namespace std;
 int main()
{
int x=10;
int *const ptr=&x;// it mean pointer constant of type integer constant so this pointer cannot moved to other variable it is bound to x only 
x=30;// you can change the value of x because here pointer is constant 
//ptr=&y;// it is not possible because pointer is constant and  cannot moved to other variable

cout<<*ptr<<" "<<endl;
return 0;
}
