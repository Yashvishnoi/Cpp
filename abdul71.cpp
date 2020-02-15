#include<iostream>
using namespace std;
class outer//outer class can access only the public member of inner class 
{
public:
void fun()
{
i.display();
}
class inner//innner class can access the member of outer class if they are static
{
public:
void display()
{
cout<<"Dispaly of inner"<<endl;
}
};
inner i;//outer class can create the object of inner class after the defination 
};
int main()
{
outer:: inner i;// it accessible because inner function is public it is not accessible if function is private
return 0;
}
