#include<iostream>
using namespace std;
class base
{
int x;
public:
int y;
base(int y);
~base();
void neg(base &o)
{
o.y=-o.y;
}
};

base::base(int a)
{
cout<<"Consteructor is called "<<a<<endl;
x=a;
}

base::~base()
{
cout<<"Destructor is called "<<x<<endl;
}


int main()
{
base b(1);

b.y=10;
b.neg(b);

cout<<b.y<<endl;
return 0;

}
