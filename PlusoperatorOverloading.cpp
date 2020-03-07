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

friend loc operator+(loc obj1,loc obj2);// now as a friend 
loc operator =(loc obj2);//= operator overloading
loc operator++();//Prefix Increment
//loc operator++(loc obj2);//postfix Increment
}; 

loc loc::operator++()
{
longitude++;
latitude++;
return *this;//*this return object that generate call
}

/*loc loc::operator++(loc obj2)
{
longitude++;
latitude++;
return *this;//*this return object that generate call
}*/

loc loc::operator=(loc obj2)
{
longitude=obj2.longitude;
latitude=obj2.latitude;
return *this;
}

loc operator+(loc obj1,loc obj2)
{
loc temp;
temp.longitude=obj1.longitude+obj2.longitude;
temp.latitude=obj1.latitude+obj2.latitude;
return temp;
}

int main()
{
loc obj1(10,20);
loc obj2(10,20);
loc obj3;
obj3=obj1+obj2;
obj2=obj1;
//obj3=++obj2;
obj2.display();
obj3.display();
return 0;
}
