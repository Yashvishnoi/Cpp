#include<iostream>
using namespace std;

class basiccar
{
public:
void start()
{
cout<<"Basic car started";
}
};
class advancecar:public basiccar
{
public:
void start()
{
cout<<"advancecar started";
}
};
int main()
{
basiccar *p=new advancecar();
p->start();
return 0;
}
