// use of this pointer
#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int breadth;
public:
rectangle(int length, int breadth)
{
this->length=length;//this ia pointer to a same object
this->breadth=breadth;// also read as r"s length=length and same in breadth
}
int area()
{
return length*breadth;
}
};

int main()
{
rectangle r(10,20);
return 0;
}

