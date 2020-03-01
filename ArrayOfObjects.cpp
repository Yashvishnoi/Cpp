#include<iostream>
using namespace std;

class A
{

int x;

public:

void setvalue(int j)
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
int i;
A a[3];
for(i=0;i<3;i++)
{
a[i].setvalue(i+1);
}

for(i=0;i<3;i++)
{
cout<<a[i].getvalue()<<endl;
}
return 0;
}
