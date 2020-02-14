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
static int getcount()//static member function -it can access only static data member of class it cannot able to access non static member 
{
return count;
}
};
int test::count=0;

/*//this main function is for static data member
int main()
{
test t1,t2;
cout<<t1.count<<endl;
cout<<t2.count<<endl;
cout<<test::count;//static datamember can be access using object name or class name also if it is public
return 0;
}*/


//this main function is for static member function
int main()
{
cout<<test::getcount();
test t1;
cout<<t1.getcount();
return 0;
}

