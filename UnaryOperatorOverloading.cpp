#include<iostream>
using namespace std;

class Distance
{
int feet;
int inches;
public:
Distance()
{
feet=0;
inches=0;
}
Distance(int f,int i)
{
feet=f;
inches=i;
}
void displayDistance()
{
cout<<"feet "<<feet<<endl<<"inches "<<inches<<endl;
}
Distance operator-();
};

Distance Distance::operator-()
{
feet=-feet;
inches=-inches;
return Distance(feet, inches);
}


int main()
{
Distance d1(11,10);
//distance d2(-5,11);

Distance d3 = -d1;
d1.displayDistance();

//-d2;
//d2.displayDistance();

return 0;
}
