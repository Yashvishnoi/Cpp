#include<iostream>
using namespace std;
class base
{
int x;
public:
base(int j)
{
x=j;
}
int getvalue()
{
return x;
}

};

int main()
{
base b(20), *p;
 p=&b;
cout<<p->getvalue()<<endl;
return 0;
}
