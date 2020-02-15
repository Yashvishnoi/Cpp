#include<iostream>
using namespace std;
class outer//outer class can access only the public member of inner class 
{

class inner//now this class  is private so it cannot called in main function by using scope resolution operator
{
public:
void display()
{
cout<<"Dispaly of inner"<<endl;
}
};

public:
void fun()
{
i.display();
}

inner i;//outer class can create the object of inner class after the defination 
};
int main()
{
return 0;
}
