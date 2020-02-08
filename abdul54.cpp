//Constructors in heritance
#include<iostream>
using namespace std;

class base
{
public:
base()
{
cout<<"Default constructor"<<endl;//(i)
}
base(int x)
{
cout<<"Parametirized constructor"<<x<<endl;//(ii)
}
};



class derived:public base
{
public:
derived()
{
cout<<"Default constructor"<<endl;//(iii)
}
derived(int y)
{
cout<<"Parametrized constructor"<<y<<endl;//(iv)
}
derived(int y,int x):base(x)
{
cout<<"parameter of derived class "<<y<<endl;//(v)
}
};



int main()
{
//derived d;//if this line is executed then  output will be (i)st &(iii)th line 
//derived d(10);//if this line is executed then  output will be (i)st &(iv)th line 
derived d(10,20);//if this line is executed then  output will be (ii)st &(v)th line 
return 0;
}
