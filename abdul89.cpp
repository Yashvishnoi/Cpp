#include<iostream>
using namespace std;
class base
{
public:
base()
{
cout<<"Constructor of base class is called"<<endl;
}
~base()
{
cout<<"Destructor of base class is called"<<endl;
}
};

class derived:public base
{
public:
derived()
{
cout<<"Constructor of derived class is called"<<endl;
}
~derived()
{
cout<<"Destructor of derived class is called"<<endl;
}
};
int main()
{
derived d;// in this first constructor of base class is called then derived class constructor and in case of destructor first destructor of derived class is called then destructor of base class is called
return 0;
}
