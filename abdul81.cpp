#include<iostream>
using namespace std;
int main()
{
int x=10;//constant pointer to integer constant
const int * const ptr=&x;
  //++*ptr;//neither you can modify the data 
int y=20;
  //ptr=&y;//nor you can change the pointer
cout<<*ptr<<" "<<x<<endl;
return 0;
}
