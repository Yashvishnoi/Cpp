#include<iostream>
using namespace std;
class test
{
private:
int a;
int b;
public:
static int count;//static data member
test()
{
a=10;
b=10;
count++;
}
};
int test::count=0;

int main()
{
test t1,t2;
cout<<t1.count<<endl;
cout<<t2.count<<endl;
cout<<test::count;//static datamember can be access using object name or class name also if it is public
return 0;
}
