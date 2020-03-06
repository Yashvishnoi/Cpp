#include<iostream>
using namespace std;
 
class loc
{

private:

int longitude;
int latitude;

public:

loc() {}

loc(int lo,int la)
{
longitude=lo;
latitude=la;
}

void display()
{
cout<<longitude <<" longitude " <<latitude<<" latitude "<<endl;
} 

loc operator+(loc obj2);// + operator overloading 
loc operator =(loc obj2);
};

loc loc::operator=(loc obj2)
{
longitude=obj2.longitude;
latitude=obj2.latitude;
return *this;
}

loc loc::operator+(loc obj2)
{
loc temp;
temp.longitude=this->longitude+obj2.longitude;
temp.latitude=this->latitude+obj2.latitude;
return temp;
}

int main()
{
loc obj1(10,20);
loc obj2(10,20);
loc obj3;
//obj3=obj1+obj2;
obj3=obj2;
obj3.display();
return 0;
}
