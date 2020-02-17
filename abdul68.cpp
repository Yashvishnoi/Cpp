#include<iostream>
using namespace std;
class test
{
public:
int a;
static int count;
test()
{
a=10;
count++; 
}
};
int test::count=0;

int main()
{
test t1,t2;
cout<<t1.count<<endl<<t2.count<<endl;
t1.count=25;// i modified the value of t1.count but when we print the value of t2.count we get the value which we modified so we can say that there is only single memory is allocated for count which is static variable
cout<<t2.count<<endl;
cout<<test::count<<endl;//count variable can access using object and class name also
return 0;
}

