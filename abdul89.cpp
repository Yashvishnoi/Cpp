#include<iostream>
using namespace std;
class base
{
public:
base()// constructor of base class
{
cout<<"Constructor of base class is called"<<endl;
}
~base()// destructor pof base class
{
cout<<"Destructor of base class is called"<<endl;
}
};

class derived:public base// derived class is inherited from base class
{
public:
derived()//constrctor of derived class
{
cout<<"Constructor of derived class is called"<<endl;
}
~derived()// destructor of base class
{
cout<<"Destructor of derived class is called"<<endl;
}
};
int main()
{
derived d;// in this first constructor of base class is called then derived class constructor and in case of destructor first destructor of derived class is called then destructor of base class is called
return 0;
}
