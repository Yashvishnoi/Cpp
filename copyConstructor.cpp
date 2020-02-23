#include<iostream>
using namespace std;
class stack
{
private:
int x,y;
public:
stack(int x,int y)
{
this-> x=x;
this-> y=y;
}

stack(const stack &p1)
{
x=p1.x;
y=p1.y;
}

int getx()
{
return x;
}

int gety()
{
return y;
}
};



int main()
{
stack s1(10,20);
stack s2=s1;
cout<<"s1.x="<<s1.getx()<<endl<<"s1.y="<<s1.gety()<<endl;
cout<<"s2.x="<<s2.getx()<<endl<<"s2.y="<<s2.gety()<<endl;
return 0;
}
