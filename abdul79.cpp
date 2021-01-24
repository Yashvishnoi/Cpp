#include<iostream>
using namespace std;
int main()
{
int x=10;
int const *ptr=&x;//now it is pointing on x

int y=20;
ptr=&y;// now it will pointing on y  you can change pointer to point on other data member
//++*ptr;// now also we cannnot modify because pointer is of type constant
cout<<*ptr<<endl;
return 0;
}
