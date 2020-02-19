#include<iostream>
using namespace std;
class demo
{
int *p;
public:
demo()
{
p=new int [10];
cout<<"constructor is called"<<endl;
}
~demo()
{
delete []p;
cout<<"destructor is called"<<endl;//array is created it is not delete automatically we have to deallocate the memory by using delete function
}
};
int main()
{

return 0;
}
