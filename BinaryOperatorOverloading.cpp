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
Distance operator+(Distance obj);
};

Distance Distance::operator+(Distance obj)
{
Distance temp;
temp.feet = obj.feet + this->feet;
temp.inches= obj.inches + this->inches;
return temp;
}


int main()
{
Distance d1(11,10);
Distance d2(5,11);

Distance d3 = d1+d2;
d3.displayDistance();

//-d2;
//d2.displayDistance();

return 0;
}
