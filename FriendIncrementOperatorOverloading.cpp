#include<iostream>
using namespace std;

class loc
{
int longitude,latitude;

public:

loc() {}

loc(int lo,int la)
{
longitude=lo;
latitude=la;
}

void display()
{
cout<<"Longitude is "<<longitude<<" Latitude is "<<latitude<<endl;
}

friend loc operator++(loc &obj);

};

loc operator++(loc &obj)
{
obj.longitude++;
obj.latitude++;
return obj;
}

int main()
{
loc obj1(99,199);
++obj1;
obj1.display();
return 0;
}
