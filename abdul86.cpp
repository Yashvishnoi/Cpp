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
First::fun();
fun();
return 0;
}
