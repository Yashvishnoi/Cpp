 
#include<iostream>
using namespace std;
class base
{
public:
void fun()//(i)
{
cout<<"function of Base";
}
};

class derived:public base
{
public:
void fun()//(ii)
{
cout<<"Function of derived ";
}
};

int main()
{
base *ptr=new derived();//function i is called
ptr->fun();
return 0;
}




