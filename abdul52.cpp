#include<iostream>
using namespace std;
class base//Parent 
{
public:
int x;
void show()
{
cout<<x<<endl;
}
};

class derived:public base//derived from parent
{
public:
int y;
void display()
{
cout/*<<x*/<<y<<endl;//showing garbage value when we try to print the value of x
}
};


int main()
{
base b;
cout<<"Enter the value of x"<<endl;
cin>>b.x;
b.show();
derived d;
cout<<"Enter the value of y"<<endl;
cin>>d.y;
d.display();
return 0;
}
