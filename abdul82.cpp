#include<iostream>
using namespace std;
class demo
{
public:
int x=10;
int y=20;
void display() const//you cannot modify the member of a class when you declare function as a constant so it can only read them not modify them
{
//x++;
cout<<x<<" "<<y<<endl;
}
};
int main()
{
demo d;
d.display();
return 0;
}
