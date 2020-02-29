#include<iostream>
using namespace std;
class base
{
public:
static int a;
base()
{
a++;
}
~base()
{
a--;
}
};

void f()
{
base temp;
cout<<"Objects in existance "<<base::a<<endl;
}

int base::a;
int main()
{
base b;
cout<<"Objects in existance "<<base::a<<endl;
base b2;
cout<<"Objects in existance "<<base::a<<endl;
f();
cout<<"Objects in existance "<<base::a<<endl;
return 0;

}
