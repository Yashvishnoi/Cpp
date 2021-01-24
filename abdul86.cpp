#include<iostream>
using namespace std;

namespace First
{
void fun()
{
cout<<"First function is called "<<endl;
}
};

namespace Second
{
void fun()
{
cout<<"Second function is called"<<endl;
}
};
/*using namespace First;
int main()
{
fun();
fun();
return 0;
}*/

using namespace Second;
int main()
{
First::fun();// if we write like this then first function is called although we write namespace second
fun();
return 0;
}
