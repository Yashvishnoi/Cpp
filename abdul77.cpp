#include<iostream> 
using namespace std;
int main()
{
const int x=10;// we can also write int const x=10;
//x++;// you cannot modify the value of const variable here x
//x=30;// it is also an error you cannot modify bthis
cout<<x<<endl;
return 0;
}
