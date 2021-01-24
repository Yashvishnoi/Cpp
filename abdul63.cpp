#include<iostream>
using namespace std;

class car//if a class is having pure virtual function then it is called pure ABSTRACT CLASS
{
public:
virtual void start()=0;//Pure virtual function it is used to achieve polymorphism
} ;

class innova:public car
{
public:
void start()// if we make this comment then innova also become abstract class
{
cout<<"Innova started"<<endl;
}
};

class swift:public car
{
void start()
{
cout<<"swift started";
}
};


int main()
{
//car c;//if we didn't assign start 0 then we can create object of base class if we have pure virtual function the we cannot define the object of virtual class
car *p=new innova();
p->start();
p=new swift();
p->start();
return 0;
}
