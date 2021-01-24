#include<iostream>
using namespace std;
class base//use of this class  earlier is (i)-reusability (ii)-overwriting helps achiving polymorphism //now its use is only for achiveing polymorphism
{
public:
virtual void fun1()=0;
/*{
cout<<"fun1 from base"<<endl;//-i concrete function //-i 
}*/
virtual void fun2()=0;// ii-pure virtual function it shows it must be overwriti by derived class

};
class derived:public base// derived class overwrite function ii
{
public:
void fun1()
{
cout<<"Fun1 of derived classs"<<endl;
}
void fun2()
{
cout<<"fun2 of derived class"<<endl;
}
};
int main()
{
base *p=new derived();
p->fun1();
p->fun2();
//derived d;
//d.fun1();
//d.fun2();
return 0;
}
