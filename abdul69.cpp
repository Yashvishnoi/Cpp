#include<iostream>
using namespace std;
class innova
{
public:
static int price;//static member
innova()
{
}
static int getprice()//static function
{
return price;
}
};
 

int innova::price=200000;
int main()
{
cout<<innova::getprice()<<endl;//logically here without buying the car i know the price
innova my;//here i buy the car to know the price
cout<<my.price<<endl;
return 0;
}
